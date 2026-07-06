let transactionCount = 0;
const coupon = "tanisk14";
for (let i = 0; i < 15; i++) {
    if (transactionCount === 0) {
        console.log("You got 100 rs cash back");
        transactionCount = transactionCount + 1;
    }
    else if (transactionCount <= 5 && coupon === "tanisk14") {
        console.log("You got 70 rs cash back");
        transactionCount = transactionCount + 1;
    }
    else if (transactionCount <= 10 && coupon === "tanisk14") {
        console.log("You got 50 rs cash back");
        transactionCount = transactionCount + 1;
    }
    else {
        console.log("You got no cash back");
        break;
    }
}