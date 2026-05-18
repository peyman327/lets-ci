const button1 = document.getElementById('achtergrond');
const button2 = document.getElementById('titels');
const button3 = document.getElementById('beide');

button1.addEventListener('click', function () {
    const colorInput = document.getElementById('foreground');
    const selectedColor = colorInput.value;
    document.body.style.backgroundColor = selectedColor;
});

button2.addEventListener('click', function () {
    const colorInput = document.getElementById('foreground');
    const selectedColor = colorInput.value;
    const h1Elements = document.querySelectorAll('h1');
    h1Elements.forEach(function (h1) {
        h1.style.color = selectedColor;
    });
});

button3.addEventListener('click', function () {
    const colorInput = document.getElementById('foreground');
    const selectedColor = colorInput.value;
    document.body.style.backgroundColor = selectedColor;
    const h1Elements = document.querySelectorAll('h1');
    h1Elements.forEach(function (h1) {
        h1.style.color = selectedColor;
    });
});