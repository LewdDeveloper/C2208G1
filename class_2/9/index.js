window.onload = function () {
  let paragraph, font_size, font_style, text_color, text_background_color

  font_size = document.getElementById('font-size')
  font_style = document.getElementById('font-style')
  text_color = document.getElementById('text-color')
  text_background_color = document.getElementById('text-background-color')
  
  font_style.addEventListener('change', change_font_style)
  font_size.addEventListener('change', change_font_size)
  text_color.addEventListener('input', change_color)
  text_color.addEventListener('change', change_color)
  text_background_color.addEventListener('input', change_background_color)
  text_background_color.addEventListener('change', change_background_color)

  paragraph = document.querySelectorAll('.paragraph')
  paragraph.forEach((el) => {
    el.style.fontSize = font_size.value + 'px'
    el.style.fontStyle = font_style.value
    el.style.color = text_color.value
    el.style.backgroundColor = text_background_color.value
  })
}

function change_font_size(event) {
  let paragraph = document.querySelectorAll('.paragraph')
  paragraph.forEach((el) => {
    el.style.fontSize = event.target.value + 'px'
  })
}

function change_font_style(event) {
  let paragraph = document.querySelectorAll('.paragraph')
  paragraph.forEach((el) => {
    el.style.fontStyle = event.target.value
  })
}

function change_color(event) {
  let paragraph = document.querySelectorAll('.paragraph')
  paragraph.forEach((el) => {
    el.style.color = event.target.value
  })
}

function change_background_color(event) {
  let paragraph = document.querySelectorAll('.paragraph')
  paragraph.forEach((el) => {
    el.style.backgroundColor = event.target.value
  })
}
