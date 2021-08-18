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

function tnpw(n) {
    var hasil = [n];
    if (n === 1) return hasil.push(n);
    else if (n > 1 && n % 2 === 0) {
        hasil.push(tnpw(n / 2));
        return tnpw(n / 2);
    } else if (n > 1 && n % 2 !== 0) {
        hasil.push(3 * n + 1);
        return tnpw(3 * n + 1);
    }
    return hasil;
}
console.log(tnpw(1));