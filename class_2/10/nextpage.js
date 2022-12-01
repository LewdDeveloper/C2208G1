/// <reference path="jquery-3.3.1.min.js" />

window.onload = function () {
  document
    .getElementById('student-creator')
    .addEventListener('submit', function (event) {
      event.preventDefault()
      if ($('#student-name').val() == '') {
        return
      }

      let data = {
        class: '',
        dob: '',
        gender: '',
        language: [],
      }

      let contents = $(this).serializeArray()
      for (let i = 0; i < contents.length; i++) {
        let list = contents[i]
        switch (list.name) {
          case 'name':
          case 'class':
          case 'gender':
          case 'class':
            data[list.name] = list.value
            break
          case 'dob':
            data[list.name] = list.value.replaceAll('-', '/')
            break
          default:
            data.language.push(list.name)
        }
      }

      let element = $(
        `<tr>
          <td>${data.name}</td>
          <td>${data.class}</td>
          <td>${data.dob}</td>
          <td>${data.gender}</td>
          <td>${data.language.join(', ')}</td>
          <td><a>Delete</a></td>
        </tr>`,
      ).appendTo('#student-list')

      let feed = $('.total-students-count')
      let count = parseInt(feed.text().split('/(s+)/')[0])
      feed.text(`${count + 1} student${count + 1 > 1 ? 's' : ''}`)

      element.find('a').on('click', function () {
        let del = confirm('Are you sure you want to delete?')
        if (del) {
          element.remove()
          let count = parseInt(feed.text().split('/(s+)/')[0])
          feed.text(`${count - 1} student${count - 1 > 1 ? 's' : ''}`)
        }
      }),
        event.target.reset()
    })
}

function add_student_class() {
  let v = prompt('Enter the class name')
  if (v && v != '') {
    $('#student-class').append(
      $('<option>', {
        // value: v,
        text: v.toUpperCase(),
      }),
    )
    alert('New class added successfully!')
  }
}
