// function tnpw(param) {
//     var arr = [param];
//     if (arr[arr.length - 1] === 1) return arr;
//     else if (arr[arr.length - 1] % 2 === 0 && arr[arr.length - 1] !== 1) {
//         return tnpw(arr).push(arr[arr.length - 1] / 2);
//         // arr.push(arr[arr.length - 1] / 2);
//     } else {}
//     return arr;
// }
// console.log(tnpw(1));

// function tnpw(n) {
//     var hasil = [];
//     if (n === 1) {
//         hasil.push(n);
//         return hasil;
//     } else if (n % 2 === 0) {
//         var hasilBagi2 = [n, n / 2];
//         hasil.push(hasilBagi2);
//         return hasil.push(tnpw(n / 2));
//     } else if (n % 2 !== 0) {
//         var hasil3NP1 = [n, 3 * n + 1];
//         return hasil.push(tnpw(3 * n + 1));
//     }
// }
// console.log(tnpw(1));

// function tnpw(n) {
//     var hasil = [];
//     if (n === 1) {
//         hasil.push(n);
//         return hasil;
//     } else if (n % 2 === 0) {
//         hasil.push(tnpw(n / 2));
//         return hasil;
//     } else if (n % 2 !== 0) {
//         hasil.push(tnpw(3 * n + 1));
//         return hasil;
//     }
// }
// console.log(tnpw(2));