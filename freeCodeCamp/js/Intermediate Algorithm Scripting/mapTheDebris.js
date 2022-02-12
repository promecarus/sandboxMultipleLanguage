function orbitalPeriod(arr) {
    const GM = 398600.4418,
        earthRadius = 6367.4447,
        a = 2 * Math.PI,
        newArr = [];

    const getOrbPeriod = function (obj) {
        const c = Math.pow(earthRadius + obj.avgAlt, 3);
        const b = Math.sqrt(c / GM);
        const orbPeriod = Math.round(a * b);

        return { name: obj.name, orbitalPeriod: orbPeriod };
    };

    for (let elem in arr) {
        newArr.push(getOrbPeriod(arr[elem]));
    }
    return newArr;
}

console.log(orbitalPeriod([{ name: "sputnik", avgAlt: 35873.5553 }]));
