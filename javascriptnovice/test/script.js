const invoer = process.argv[2];
const bedrag = parseInt(invoer, 10);

if (Number.isNaN(bedrag) || bedrag <= 0) {
    console.error('Geef een geldig bedrag zonder decimalen op.');
    process.exit(1);
}

const biljetten = [50, 20, 10, 5];
const resultaat = {};
let rest = bedrag;
let index = 0;

while (index < biljetten.length) {
    const waarde = biljetten[index];
    let aantal = 0;

    while (rest >= waarde) {
        rest -= waarde;
        aantal += 1;
    }

    resultaat[waarde] = aantal;
    index += 1;
}

index = 0;
while (index < biljetten.length) {
    const waarde = biljetten[index];
    const aantal = resultaat[waarde];

    if (aantal > 0) {
        console.log(`${aantal} x €${waarde}`);
    }

    index += 1;
}
