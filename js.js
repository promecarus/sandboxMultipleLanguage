// let angka1 = "1 3 5";
// let angka2 = "2 7 9";
// var huruf1 = "ini";
// let x = angka1.split(" ");
// let y = angka2.split(" ");
// let z = huruf1.split(" ");
// console.log(x);
// console.log(y);
// console.log(z);

// var hur="AA"
// var kode = '=IF(LEN(A1)>'+hur+'1, LEFT(RIGHT(A1,LEN(A1)-'+hur+'1),1), "")';
// console.log(kode);

// var myArray = [
//     [1, 2, 3],
//     [4, 5, 6],
//     [7, 8, 9],
//     [
//         [10, 11, 12], 13, 14
//     ],
// ];

// var myData = myArray[3][0][2];
// console.log(myData);

// function trueOrFalse(wasThatTrue) {
//   // Only change code below this line
//   if (wasThatTrue) {
//     return "Yes, that was true";
//   }
//   return "No, that was false";
//   // Only change code above this line
// }
// var tre = trueOrFalse(true);
// console.log(tre);

// var tre = trueOrFalse(false);
// console.log(tre);

// Setup
// function testEqual(val) {
//     if (val) {
//         // Change this line
//         return "Equal";
//     }
//     return "Not Equal";
// }

// testEqual(10);

// function cek(params1, params2) {
//     if (params1 != params2) {
//         return "true";
//     }
//     return "false";
// }

// var hasil = cek(0, true);
// console.log(hasil);

// if (num < 5) {
//     return "Tiny";
// } else if (num < 10) {
//     return "Small";
// } else if (num < 15) {
//     return "Medium";
// } else if (num < 20) {
//     return "Large";
// } else if (num >= 20) {
//     return "Huge";
// }

// var names = ["Hole-in-one!", "Eagle", "Birdie", "Par", "Bogey", "Double Bogey", "Go Home!"];

// function golfScore(par, strokes) {
//     // Only change code below this line
//     if (strokes == 1) {
//         return names[0];
//     } else if (par + 3 <= strokes) {
//         return "Go Home!";
//     } else if (par - 2 >= strokes) {
//         return "Eagle";
//     } else if (par - 1 == strokes) {
//         return "Birdie";
//     } else if (par == strokes) {
//         return "Par";
//     } else if (par + 1 == strokes) {
//         return "Bogey";
//     } else if (par + 2 == strokes) {
//         return "Double Bogey";
//     }
//     return "Change Me";
//     // Only change code above this line
// }

// var hasil = golfScore(4, 1);
// console.log(hasil);

// function caseInSwitch(val) {
//     var answer = "";
//     // Only change code below this line
//     switch (val) {
//         case 1:
//             answer = "alpha";
//             break;
//         case 2:
//             answer = "beta";
//             break;
//         case 3:
//             answer = "gamma";
//             break;
//         case 4:
//             answer = "delta";
//             break;
//     }

//     // Only change code above this line
//     return answer;
// }

// console.log(caseInSwitch(1));

// function myFun() {
//     console.log("Hello");
//     return "World";
//     console.log("byebye");
// }
// console.log(myFun());

// var count = 0;

// function cc(card) {
//     // Only change code below this line
//     switch (card) {
//         case 2:
//         case 3:
//         case 4:
//         case 5:
//         case 6:
//             count++;
//             break;

//         case 10:
//         case "J":
//         case "Q":
//         case "K":
//         case "A":
//             count--;
//             break;
//     }
//     var holdbet = "";
//     if (count > 0) {
//         holdbet = "Bet";
//     } else {
//         holdbet = "Hold";
//     }
//     return count + " " + holdbet;

//     // Only change code above this line
// }

// cc(2);
// cc(3);
// cc(4);
// cc(5);
// cc(6);

// console.log(cc());

// var myDog = {
//     // Only change code below this line
//     name: "a string",
//     "legs haha": 4,
//     tails: 1,
//     friends: ["fire", "earth"],
//     12:"sembilan"
//     // Only change code above this line
// };
// console.log(myDog.tails);

// function pangkat8(params) {
//     return params * params * params * params * params * params * params * params;
// }
// var hasil=console.log(pangkat8(2));

// var someObj = {
//   propName: "John",
// };
// function propPrefix(str) {
//   var s = "prop";
//   return s + str;
// }
// var someProp = propPrefix("Name");
// console.log(someObj[someProp]);

// // Setup
// var testObj = {
//     12: "Namath",
//     16: "Montana",
//     19: "Unitas",
// };

// // Only change code below this line

// var playerNumber = testObj[16]; // Change this line
// var player = playerNumber; // Change this line
// console.log(player);

// var character1 = [1, 4, "halo", 9, "sembilan", "satu"];
// console.log(character1[0]);

// var character2 = {
//     nama: "haikal",
//     kelas: 9,
//     "umur sekarang": "sembilan",
// };
// console.log(character2["umur sekarang"]);

// function checkObj(obj, checkProp) {
//     // Only change code below this line
//     if (obj.hasOwnProperty(checkProp)) {
//         return obj[checkProp]
//     } else {
//         return "Not Found";
//     }
//         // Only change code above this line
// }

// checkObj({ gift: "pony", pet: "kitten", bed: "sleigh" }, "gift");

// var ourPets = [{
//         animalType: "cat",
//         names: ["Meowzer", "Fluffy", "Kit-Cat"],
//     },
//     {
//         animalType: "dog",
//         names: ["Spot", "Bowser", "Frankie"],
//     },
// ];
// console.log(ourPets[0].names[1]);
// console.log(ourPets[1].names[0]);

// Nested object
// var ourStorage = {
//   desk: {
//     drawer: "stapler",
//   },
//   cabinet: {
//     "top drawer": {
//       folder1: "a file",
//       folder2: "secrets",
//     },
//     "bottom drawer": "soda",
//   },
// };
// ourStorage.cabinet["top drawer"].folder2;
// ourStorage.desk.drawer;

//Nested array
// var ourPets = [{
//         animalType: "cat",
//         names: ["Meowzer", "Fluffy", "Kit-Cat"],
//     },
//     {
//         animalType: "dog",
//         names: ["Spot", "Bowser", "Frankie"],
//     },
// ];
// ourPets[0].names[1];
// ourPets[1].names[0];

// // Setup
// var recordCollection = {
//     2548: {
//         albumTitle: "Slippery When Wet",
//         artist: "Bon Jovi",
//         tracks: ["Let It Rock", "You Give Love a Bad Name"],
//     },
//     2468: {
//         albumTitle: "1999",
//         artist: "Prince",
//         tracks: ["1999", "Little Red Corvette"],
//     },
//     1245: {
//         artist: "Robert Palmer",
//         tracks: [],
//     },
//     5439: {
//         albumTitle: "ABBA Gold",
//     },
// };

// // Only change code below this line
// function updateRecords(records, id, prop, value) {
//     if (prop != "tracks" && value != "") {
//         records[id][prop] = value;
//     } else if (prop === "tracks" && records[id][prop] == undefined) {
//         records[id][prop] = [value];
//     } else if (value === "") {
//         delete records[id][prop];
//     } else if (prop === "tracks") {
//         records[id][prop].push(value);
//     }
//     return records;
// }

// updateRecords(recordCollection, 5439, "artist", "ABBA");
// updateRecords(recordCollection, 5439, "tracks", "Take a Chance on Me");
// updateRecords(recordCollection, 2548, "artist", "");
// updateRecords(recordCollection, 1245, "tracks", "Addicted to Love");
// updateRecords(recordCollection, 2468, "tracks", "Free");
// updateRecords(recordCollection, 2548, "tracks", "");
// console.log(updateRecords(recordCollection, 1245, "albumTitle", "Riptide"));

function fungsi(a, b) {
    return a ** 3 + b ** 3;
}

console.log(fungsi(8, 3) + fungsi(8, 3));

function tambahUniversal() {
    var hasil = 0;
    for (let i = 0; i < arguments.length; i++) {
        hasil += arguments[i];
    }
    return hasil;
}

console.log(tambahUniversal(1, 3, 6));