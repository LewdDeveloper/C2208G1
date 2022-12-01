function emi_clear_input() {
  let node = document.getElementById('emi-input-form')
  let inputs = node.getElementsByTagName('input')
  for (let i = 0; i < inputs.length; i++) {
    inputs[i].value = ''
  }
}

//calculate emi
function emi_calculate() {
  let principal = document.getElementById('emi-principal').value
  let rate = document.getElementById('emi-rate').value
  let period = document.getElementById('emi-period').value
  let interest = (principal * (rate * 0.01)) / period

  let emi = (principal / period + interest).toFixed(2)

  document.getElementById('emi-emi').value = parseFloat(emi)
}
