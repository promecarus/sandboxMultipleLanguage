const squareList = (arr) => {
    // Only change code below this line
    const newArr = arr
        .filter((item) => item > 0)
        .reduce((result, item) => result.concat(item * item), [])
        .filter((item) => Number.isInteger(item));
    return newArr;
    // Only change code above this line
};

const squaredIntegers = squareList([-3, 4.8, 5, 3, -3.2]);
console.log(squaredIntegers);
