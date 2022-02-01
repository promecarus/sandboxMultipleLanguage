function bouncer(arr) {
    let result = [];
    for (let item in arr) {
        if (arr[item]) {
            result.push(arr[item]);
        }
    }
    return result;
}

bouncer([7, "ate", "", false, 9]);
