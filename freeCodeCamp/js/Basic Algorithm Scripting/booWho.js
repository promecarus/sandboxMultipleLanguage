function booWho(bool) {
    return typeof bool === "boolean";
}

console.log(booWho("boolean"));
console.log(booWho(false));
