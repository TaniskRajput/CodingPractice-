const cricketers = [
  {
    name: "Virat Kohli",
    age: 33,
    country: "India",
    role: "Batsman",
  },
  {
    name: "Rohit Sharma", 
    age: 34 , 
    country:"india" ,
    role:"batsman",
  }]
//   console.log(cricketers[0].name)
//   console.log(cricketers[1].age)
//   cricketers[0].name="MS Dhoni"
//   console.log(cricketers[0].name)
//   console.log(typeof cricketers)
//   delete(cricketers[0].age)
//   console.log(cricketers[0].age=10)
//   cricketers.pop()    
//   console.log(cricketers)
//   cricketers.push({
//     name: "Rishabh Pant",
//     age: 24,
//     country: "India",
//     role: "Wicket Keeper",
//   }
//   )
//   console.log(cricketers)
//seprate array 
// const name = "Tanisk#Singh"
// const arr = name.split("#")
// console.log(arr)
// const arr = [1,2,3,4,5,6,7,8,9]
// for(let i = 0;i<arr.length;i++){
//     arr[i] = arr[i]+3;
//     console.log(arr[i])
// }

const arr = [1,2,3,4,5,6,7,8,9]
const newArr = arr.slice(2,5)
console.log(newArr)
arr.splice(2,3)
console.log(arr)