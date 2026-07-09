const array = [20,5,4,6,87,4,3,2,1,0];
//array.map() method
console.log("Find: ",array.find((ele)=>{
    return ele>10;
}))
//array.reduce method
console.log("Reduce: ",array.reduce((a,b)=>{
    return a+b;
}))