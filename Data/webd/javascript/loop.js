let num = 233344343565464663463636
let count = 0;
// while (num > 0) {
//     num = Math.floor(num / 10);
//     count++;
// }
for(;num > 0; num = Math.floor(num / 10)) {
    count++;
}
console.log("The number of digits in the number is: " + count);