const readline = require("readline");

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

const n = Math.floor(Math.random() * 100) + 1;

let a = -1;
let guesses = 0;

function guessNumber() {
    rl.question("Enter a number: ", (input) => {
        guesses++;
        a = Number(input);

        if (a > n) {
            console.log("Enter a lower number.");
            guessNumber();
        } else if (a < n) {
            console.log("Enter a higher number.");
            guessNumber();
        } else {
            console.log(`Congratulations! You guessed the number in ${guesses} attempt(s).`);
            rl.close();
        }
    });
}

guessNumber();










let n = Math.floor(Math.random() * 100) + 1;
let a = -1;
let guesses = 0;

while (a != n) {
    guesses++;
    a = Number(prompt("Enter a number:"));

    if (a > n) {
        console.log("Enter a lower number.");
    } else if (a < n) {
        console.log("Enter a higher number.");
    }
}

console.log("Congratulations! You guessed the number in " + guesses + " attempt(s).");
