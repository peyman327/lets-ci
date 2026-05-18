let rating = Number(process.argv[2]);
let natuur = Number(process.argv[3]);
let autoweg = Number(process.argv[4]);

console.log("rating:", rating);
console.log("natuurgebied:", natuur);
console.log("autoweg:", autoweg);

if (rating === 3 && natuur > 25) {
    console.log("belastingkorting voor de inwoners");
} else if (rating === 3 && natuur <= 25) {
    console.log("subsidie voor aanleg van meer natuur");
} else if (rating < 3 && autoweg > 200) {
    console.log("subsidie voor ombouwen autoweg naar fietsstraat");
} else {
    console.log("subsidie voor afvalinzameling");
}