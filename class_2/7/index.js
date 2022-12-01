function on_factorial() {
  let integer,
    factorial = 1
  while (isNaN(integer)) {
    integer = parseInt(prompt('Enter factorial number', '5'))
  }
  for (let i = 1; i <= integer; i++) {
    factorial *= i
  }
  document.getElementById(
    'display_result',
  ).innerText = `Factorial of ${integer} is ${factorial}`
}

function on_calculate() {
  let a = document.getElementById('a').value | 0
  let b = document.getElementById('b').value | 0
  document.getElementById('display_result').innerText = `Result: ${a + b}`
}

function on_multiplication_table() {
  let integer
  while (isNaN(integer) || integer < 2 || integer > 10) {
    integer = parseInt(prompt('Enter a number (range from 2 to 10)', '5'))
  }
  let result = `Multiplication table of ${integer}:\r`
  for (let i = 1; i <= 10; i++) {
    result += `${integer} x ${i} = ${integer * i}\r`
  }
  document.getElementById('display_result').innerText = result
}

function on_display_student() {
  let dict = []
  let lines = document.getElementById('student_list_textarea').value.split('\n')

  for (let i = 0; i < lines.length; i++) {
    let line = lines[i]
    let student = line.split(' ')
    let year = parseInt(student.pop())
    if (!isNaN(year)) {
      dict.push({
        name: student.join(' '),
        year: year,
      })
    }
  }

  dict.sort((a, b) => {
    return (a.name > b.name) - (a.name < b.name)
  })
  // dict.forEach((element, index) => {
  //   console.log(element, index)
  // })
  // for (let i = 0; i < dict.length; i++) {
  //   console.log(dict[i], i)
  // }
  // for (key in dict) {
  //   console.log(dict[key], key)
  // }

  let student_table = find_student_table()
  if (student_table) {
    while (student_table.lastChild.id !== 'student_table_header') {
      student_table.removeChild(student_table.lastChild)
    }

    for (key in dict) {
      let _ = student_table.appendChild(document.createElement('tr'))
      _.id = `student_${key}`

      _.appendChild(document.createElement('td')).innerText = dict[key].name
      _.appendChild(document.createElement('td')).innerText = dict[key].year
    }
  }
}

function find_student_table() {
  let student_table = document.getElementById('student_table')
  if (!student_table) {
    student_table = document.createElement('table')
    student_table.id = 'student_table'
    student_table.border = 1
    let student_table_header = student_table.appendChild(
      document.createElement('tr'),
    )
    student_table_header.id = 'student_table_header'
    student_table_header.appendChild(document.createElement('th')).innerText =
      'Name'
    student_table_header.appendChild(document.createElement('th')).innerText =
      'Year of birth'
    document.getElementById('homework').appendChild(student_table)
  }
  return student_table
}
