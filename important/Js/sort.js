const array = [40, 100, 1, 5, 25, 10];
console.log(array);
array.sort(function (a, b) {
  return a - b;
});
console.log(array);
