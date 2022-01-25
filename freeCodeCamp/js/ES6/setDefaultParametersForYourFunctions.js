// before
// const increment = (number, value) => number + value;

// after
const increment = (number, value = 1) => number + value;

console.log(increment(4));
