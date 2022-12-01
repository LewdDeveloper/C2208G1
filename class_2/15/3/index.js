window.onload = function () {
  /** @type {HTMLCanvasElement} */
  let canvas = document.getElementById('canvas')
  let ctx = canvas.getContext('2d')

  canvas.width = 200
  canvas.height = 200

  ctx.fillStyle = 'lightgray'
  ctx.fillRect(0, 0, 180, 180)

  ctx.globalAlpha = 0.3

  ctx.fillStyle = 'red'
  ctx.fillRect(10, 10, 120, 120)

  ctx.fillStyle = 'green'
  ctx.fillRect(50, 50, 120, 120)
}
