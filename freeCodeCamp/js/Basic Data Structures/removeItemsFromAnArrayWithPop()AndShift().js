function popShift(arr) {
    let popped = arr[arr.length - 1];
    arr.pop();
    let shifted = arr[0]; // Change this line
    arr.shift();
    return [shifted, popped];
}

console.log(popShift(["challenge", "is", "not", "complete"]));
