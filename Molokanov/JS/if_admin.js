let login = prompt('Who are you?', 'Admin');

if(login == 'Admin'){
    let password = prompt("Password:", 'I am the law');
    if(password == 'I am the law') alert("Hello");
    else if(password == '' || password == null) alert("Exit");
    else alert("Wrong password");
}
else if(login == '' || login == null) alert("Exit");
else alert("Unknown user");