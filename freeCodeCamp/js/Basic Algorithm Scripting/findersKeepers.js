function findElement(arr, func) {
    // filter the array
    let filtered = arr.filter(func);
    // return the first element of the filtered array
    return filtered[0];
}
console.log(findElement([1, 2, 3, 4], (num) => num % 2 === 0));

console.log(findElement([1, 3, 5, 98], (num) => num % 2 === 0));
