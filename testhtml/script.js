const accept = document.getElementById("accept-knop");
const reject = document.getElementById("reject-knop");
const cookiesbanner = document.getElementById("cookie-banner");

const cookiesaccept = () => {
    cookiesbanner.innerText = "Bedankt voor je toestemming!";
};

const cookiesreject = () => {
    cookiesbanner.innerText = "Sad... :(";
};

accept.addEventListener("click", cookiesaccept);
reject.addEventListener("click", cookiesreject);