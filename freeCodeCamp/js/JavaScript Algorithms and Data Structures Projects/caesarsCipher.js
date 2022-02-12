function rot13(str) {
    const alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ".split("");
    let result = "";

    for (let i = 0; i < str.length; i++) {
        let char = str[i];
        let charIndex = alphabet.indexOf(char);
        if (charIndex >= 0) {
            if (charIndex + 13 > 25) {
                result += alphabet[charIndex + 13 - 26];
            } else {
                result += alphabet[charIndex + 13];
            }
        } else {
            result += char;
        }
    }
    return result;
}
console.log(rot13("SERR PBQR PNZC"));
