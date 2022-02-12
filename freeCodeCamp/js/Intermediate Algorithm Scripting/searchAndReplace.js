function myReplace(str, before, after) {
    if (before[0] === before[0].toUpperCase()) {
        after = after.charAt(0).toUpperCase() + after.slice(1);
    } else {
        after = after.charAt(0).toLowerCase() + after.slice(1);
    }
    str = str.replace(before, after);
    return str;
}
console.log(myReplace("I think we should look up there", "up", "Down"));
