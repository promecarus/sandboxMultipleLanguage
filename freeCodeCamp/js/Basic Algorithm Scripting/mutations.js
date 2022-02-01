function mutation(arr) {
    let container = arr[0].toLowerCase();
    let test = arr[1].toLowerCase();
    for (let i = 0; i < test.length; i++) {
        if (container.indexOf(test[i]) === -1) {
            return false;
        }
    }
    return true;
}

mutation(["hello", "hey"]);
