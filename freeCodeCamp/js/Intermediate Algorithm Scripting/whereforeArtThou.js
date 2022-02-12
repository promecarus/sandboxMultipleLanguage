function whatIsInAName(collection, source) {
    const arr = [];
    // Only change code below this line
    const keys = Object.keys(source);
    const values = Object.values(source);
    collection.forEach((obj) => {
        let flag = true;
        for (let i = 0; i < keys.length; i++) {
            if (!obj.hasOwnProperty(keys[i]) || obj[keys[i]] !== values[i]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            arr.push(obj);
        }
    });

    // Only change code above this line
    return arr;
}

whatIsInAName(
    [
        { first: "Romeo", last: "Montague" },
        { first: "Mercutio", last: null },
        { first: "Tybalt", last: "Capulet" },
    ],
    { last: "Capulet" }
);
