function destroyer(...arr) {
    return arr[0].filter(
        (val) =>
            !arr
                .slice(1)
                .reduce((acc, curr) => acc.concat(curr), [])
                .includes(val)
    );
}
console.log(destroyer([1, 2, 3, 1, 2, 3], 2, 3));
