function pairElement(str) {
    let arr = [],
        pairs = {
            A: "T",
            T: "A",
            G: "C",
            C: "G",
        };
    for (let i = 0; i < str.length; i++) {
        arr.push([str[i], pairs[str[i]]]);
    }
    return arr;
}
console.log(pairElement("GCG"));
