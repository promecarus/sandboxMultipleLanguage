// var penumpang = [];

// var tambahPenumpang = function(nama, type) {
//     if (type.length == 0) {
//         type.push(nama);
//         return type;
//     } else {
//         for (let i = 0; i < type.length; i++) {
//             if (type[i] == undefined) {
//                 type[i] = nama;
//                 return type;
//             } else if (type[i] == nama) {
//                 console.log("Penumpang sudah di dalam.");
//                 return type;
//             } else if (i == type.length - 1) {
//                 type.push(nama);
//                 return type;
//             }
//         }
//     }
// };

// var hapusPenumpang = function(nama, type) {
//     if (type.length == 0) {
//         console.log("Angkot kosong.");
//         return type;
//     } else {
//         for (let i = 0; i < type.length; i++) {
//             if (type[i] == nama) {
//                 type[i] = undefined;
//                 return type;
//             } else if (i == type.length - 1) {
//                 console.log(nama + " tidak di dalam angkot.");
//                 return type;
//             }
//         }
//     }
//     for (let i = 0; i < penumpang.length; i++) {}
// };
// tambahPenumpang("bodi", penumpang);
// tambahPenumpang("deda", penumpang);
// tambahPenumpang("dedq", penumpang);
// hapusPenumpang("deda", penumpang);
// tambahPenumpang("lolp", penumpang);
// console.log(penumpang);