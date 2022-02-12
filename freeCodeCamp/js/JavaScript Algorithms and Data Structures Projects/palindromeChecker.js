function palindrome(str) {
    let newStr = str.toLowerCase().match(/[a-z0-9]/g);
    return newStr.join("") === newStr.reverse().join("");
}
console.log(palindrome("eEyea"));
