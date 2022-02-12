function fearNotLetter(str) {
    let arr = str.split("");
    for (let i = 0; i < arr.length; i++) {
        if (arr[i].charCodeAt() !== arr[0].charCodeAt() + i) {
            return String.fromCharCode(arr[0].charCodeAt() + i);
        }
    }
}

fearNotLetter("abce");
