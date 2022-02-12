function steamrollArray(arr) {
    // I'm a steamroller, baby
    // return arr.flat(Infinity);

    // or
    return arr.reduce((acc, curr) => {
        return acc.concat(Array.isArray(curr) ? steamrollArray(curr) : curr);
    }, []);
}
console.log(steamrollArray([1, [2], [3, [[4]]]]));
