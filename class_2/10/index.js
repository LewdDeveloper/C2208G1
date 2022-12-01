function login() {
  let username, password
  username = $('#username').val()
  password = $('#password').val()

  if (username == 'admin' && password == '123456') {
    alert('Login success!\nRedirecting to next page...')
    window.location.href = 'nextpage.html'
  } else {
    alert('Login failed!\nIncorrect username or password!')
  }
}
