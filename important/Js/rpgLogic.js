// ternary
function checkEqual(a, b) {
    return a == b ? "Equal" : "Not Equal";
}
console.log(checkEqual(1, 2));

function checkNumber(num) {
    return num > 0 ? "positive" : num == 0 ? "zero" : "negative";
}
console.log(checkNumber(10));

function randomNumberWithRange(min, max) {
    return Math.floor(Math.random() * (max - min + 1)) + min;
    //^buat buletin ^buat bikin angka random dari 0-1 ^nentuin rangenya
}
console.log(randomNumberWithRange(-100, 100));

function toInt(str) {
    return parseInt(str);
}
console.log(toInt(56));

function convertToInteger(str, base) {
    return parseInt(str, base);
}
console.log(convertToInteger("10", 2));

// Sort
var angka = [1, 7, 3, 6, 2, 12, 6454, 23, 23];
angka.sort();
console.log(angka);
angka.sort(function(a, b) {
    return a - b;
});
console.log(angka);

function countdown(n) {
    if (n < 0) return [];
    else {
        const countArray = countdown(n - 1);
        countArray.unshift(n);
        // countArray.push(n);
        return countArray;
    }
}
console.log(countdown(10));

function rangeMaju(startNum, endNum) {
    if (startNum == endNum) return [endNum];
    else {
        var numbers = rangeMaju(startNum, endNum - 1);
        numbers.push(endNum);
        return numbers;
    }
}
console.log(rangeMaju(1, 10));

function rangeMundur(startNum, endNum) {
    if (startNum == endNum) return [endNum];
    else {
        var numbers = rangeMundur(startNum, endNum + 1);
        numbers.push(endNum);
        return numbers;
    }
}
console.log(rangeMundur(10, 1));

// prime number
const isPrime = (num) => {
    for (let i = 2, s = Math.sqrt(num); i <= s; i++)
        if (num % i === 0) return false;
    return num > 1;
};