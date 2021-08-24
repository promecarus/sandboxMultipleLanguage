function uniqueInOrder(iterable) {
    hasil = [];
    for (let i = 0; i < iterable.length; i++) {
        if (iterable[i + 1] != iterable[i]) {
            hasil.push(iterable[i]);
        }
    }
    return hasil;
}
console.log(uniqueInOrder("AABbCDEEeFfgh"));