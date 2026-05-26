const woorden = ["The", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog"];

zoekLetter(woorden, "o");
zoekLetter(woorden, "p");
zoekLetter(woorden, "q");

function zoekLetter(array, letter) {
    for (let woord of array) {
        if (woord.includes(letter)) {
            console.log(woord + " bevat de letter '" + letter + "'");
        }
    }
}
