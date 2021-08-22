// Object Literal
var orang = {
    nama: "Haikal",
    umur: 11,
    jurusan: "Teknik Informatika",
};
console.log(orang);

// Function Declaration
function buatObject(nama, umur, jurusan) {
    var orang2 = {};
    orang.nama = nama;
    orang.umur = umur;
    orang.jurusan = jurusan;
    return orang;
}
console.log(buatObject("Haikal2", 11, "Teknik Informatika"));

// Constructor Function (keyword new)
function Orang(nama, umur, jurusan) {
    this.nama = nama;
    this.umur = umur;
    this.jurusan = jurusan;
}
var orang3 = new Orang("Haikal3", 11, "Teknik Informatika");
console.log(orang3);

console.log(new Orang("", 11, "Teknik Informatika"));
// Object.create()