const data =fetch('https://jsonplaceholder.typicode.com/users')
.then(res=>res.json())
.then((data)=>
    data.map((user)=>{
        console.log("User Name: ",user.name)
    })
);