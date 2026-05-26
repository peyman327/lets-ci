const inputEl = document.getElementById('invoer');
const startvalue = document.getElementById('start-eenheid');
const changevalue = document.getElementById('convert-eenheid');
const outputEl = document.getElementById('output');

const invoerwaarde = {
    arrowUp: 10,
    arrowDown: -10,
    arrowRight: 1,
    arrowLeft: -1,
};

const start = {
    q: 'ml',
    w: 'cl',
    e: 'dl',
    r: 'l',
};

const eind = {
    a: 'ml',
    s: 'cl',
    d: 'dl',
    f: 'l',
};

const eenheidwaarde = {
    ml: 1000,
    cl: 100,
    dl: 10,
    l: 1,
};

function rekenen(button) {
    if (Number.isNaN(parseFloat(inputEl.value))) {
        inputEl.value = "0";
    }
    if (button.key === 'ArrowUp') {
        inputEl.value = parseFloat(inputEl.value) + invoerwaarde.arrowUp;
    }
    if (button.key === 'ArrowDown') {
        inputEl.value = parseFloat(inputEl.value) + invoerwaarde.arrowDown;
    }
    if (button.key === 'ArrowRight') {
        inputEl.value = parseFloat(inputEl.value) + invoerwaarde.arrowRight;
    }
    if (button.key === 'ArrowLeft') {
        inputEl.value = parseFloat(inputEl.value) + invoerwaarde.arrowLeft;
    }
    if (button.key === 'q') {
        startvalue.value = start.q;
    }
    if (button.key === 'w') {
        startvalue.value = start.w;
    }
    if (button.key === 'e') {
        startvalue.value = start.e;
    }
    if (button.key === 'r') {
        startvalue.value = start.r;
    }
    if (button.key === 'a') {
        changevalue.value = eind.a;
    }
    if (button.key === 's') {
        changevalue.value = eind.s;
    }
    if (button.key === 'd') {
        changevalue.value = eind.d;
    }
    if (button.key === 'f') {
        changevalue.value = eind.f;
    }

    function berekening() {
        outputEl.innerText = `${
            (inputEl.value / eenheidwaarde[startvalue.value]) * eenheidwaarde[changevalue.value]
        } ${
            changevalue.value
        }`;
    }

    berekening();
}

document.addEventListener("keyup", rekenen);
document.addEventListener("click", rekenen);