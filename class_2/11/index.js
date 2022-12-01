window.onload = function () {
  document
    .getElementsByTagName('form')[0]
    .addEventListener('submit', function (event) {
      event.preventDefault()
      let list = {
        name: '',
        assigned: '',
        status: '',
      }
      let data = new FormData(event.target)
      for (const [key, value] of data) {
        // console.log(key, value)
        list[key] = value
      }
      let parent = document.getElementsByTagName('tbody')[1]
      let tr = document.createElement('tr')
      tr.innerHTML = `
        <td>${parent.children.length}</td>
        <td>${list.name}</td>
        <td>${list.assigned}</td>
        <td>${list.status}</td>
        <td><a href="#">Pin</a></td>
        <td><button type="button" style="display:inline-block;">Delete</button></td>
      `
      tr.lastElementChild.addEventListener('click', function (e) {
        tr.remove()
      })
      parent.append(tr)
      event.target.reset()
    })
}

function toLocalStorage() {
  let parent = document.getElementsByTagName('tbody')[1]
  let nodes = parent.childNodes
  let list = []
  for (let i = 1; i < nodes.length; i++) {
    let elements = nodes[i].childNodes
    if (elements.length <= 0) {
      continue
    }
    list[i] = {}
    let title
    // TODO: Hacky method?
    for (let j = 0; j < elements.length; j++) {
      if (elements[j].nodeType === Node.ELEMENT_NODE) {
        if (nodes[0].childNodes[j]) {
          title = nodes[0].childNodes[j].innerText
        }
        switch (title) {
          case 'Name':
          case 'Assigned':
          case 'Status':
            list[i][title] = elements[j].innerText
            break
        }
      }
    }
  }
  let contents = JSON.stringify(list, (key, value) => value ?? undefined, '\t')
  localStorage.setItem('saved', contents)
}

function fromLocalStorage() {
  let contents = localStorage.getItem('saved')
  JSON.parse(contents).forEach((item, index) => {})
}
