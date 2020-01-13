arr = [1, 2, 3, 4, 1]
num = JSON.stringify(arr)
console.log(num)

if (3 == '3') {
    console.log("true")
}

if (3 === "3" || 3 === 3) {
    console.log("true")
}
var nik = {
    "name": ["nikhil"],
    "class": "c2",
    "dob": 6
}

console.log(nik.class, nik.dob, nik.name)
console.log(nik.hasOwnProperty("dob"))
var nik1 = [{
        "n": "i",
        "i": "k"
    },
    {
        "k": "h",
        "h": "i",
        "i": "l"
    }
]
console.log(nik1[0]["n"], nik1[1])
a = "1010"
b = parseInt(a, 2)
c = parseInt(a)
console.log(a, b, c)

let anam = (arr1, arr2) => arr1.concat(arr2);

console.log(anam([1, 2, 1], [23, 423, 23]))

let namo = 'god'
namo = 'godofworld'

let vala = {
    x: 2,
    y:{nu:23},
    z: 5
}
const {
    x: num22,
    y: { nu: num23 },
    z: num24
} = vala;

console.log(num22, num23, num24)