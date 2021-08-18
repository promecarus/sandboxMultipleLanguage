// var a = [
//     [1, 2],
//     [3, 4],
//     [5, 6, 7],
// ];

// function multiplyAll(arr) {
//     var product = 1;
//     // Only change code below this line
//     for (var i = 0; i < arr.length; i++) {
//         for (var j = 0; j < arr[i].length; j++) {
//             product *= arr[i][j];
//         }
//     }
//     // Only change code above this line
//     return product;
// }
// console.log(multiplyAll(a));

// function addAll(arr) {
//     var product = 1;
//     for (let i = 0; i < arr.length; i++) {
//         for (let j = 0; j < arr[i].length; j++) {
//             product += arr[i][j];
//         }
//     }
//     return product;
// }
// console.log(addAll(a));

// // Setup
// var myArray = [];
// var i = 10;

// // Only change code below this line
// do {
//     myArray.push(i);
//     i++;
// } while (i < 20);
// console.log(i);

// function factorial(n) {
//     if (n === 0) return 1;
//     return n * factorial(n - 1);
// }

// console.log(factorial(4));

function sum(arr, n) {
    // Only change code below this line
    if (n <= 0) return 0;
    else {
        return sum(arr, n - 1) + arr[n - 1];
    }
    // Only change code above this line
}
console.log((a = sum([1, 4, 6], 3)));

var a = [];
a.push(1);
a.push(1);
a.push(10);
console.log(a.length);
console.log(a);