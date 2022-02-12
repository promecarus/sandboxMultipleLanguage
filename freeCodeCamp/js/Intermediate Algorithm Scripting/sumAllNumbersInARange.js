function sumAll(arr) {
    let sorted = arr.sort((a, b) => a - b),
        result = 0;
    for (let i = sorted[0]; i <= arr[1]; i++) {
        result += i;
    }
    return result;
}

sumAll([1, 4]);
