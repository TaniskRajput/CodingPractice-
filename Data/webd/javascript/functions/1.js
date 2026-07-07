// greet()
// function greet(){
//     console.log("Hello adarsh sir, isha is looking for you")
// }
// //function expression
// const greet2 = function(){
//     console.log("Hello adarsh sir, isha is looking for you")
// }
// greet2()

// //arrow function
// const greet3 = ()=>{
//     console.log("Hello adarsh sir, isha is looking for you")
// }
// //default parameter
// const greet4 = (name="Tanisk")=>{
//     console.log(`Hello ${name} sir, isha is looking for you`)
// }
// greet3("adarsh")
// greet4()
//callback function
function sum(a,b){
    return a+b;
}
function sumall(a,b,sum){
    return sum(a,b)
}
console.log(sumall(10,20,sum))