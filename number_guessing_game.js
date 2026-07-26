const readline = require("readline");
const read = readline.createInterface( {input: process.stdin,output: process.stdout} );

const n = Math.floor(Math.random() * 100) + 1; 
console.log(n)

let a = -1;
let guesses = 0;

function guesses_number(){
    read.question("Enter a number: ", (input) => {
    guesses++;
    a = Number(input);

    if (a > n) {
        console.log("Enter lower number")
        guesses_number();
    }
    else if (a < n){
        console.log("Enter higher number")
        guesses_number();
    }
    else {
        console.log("The number you guessed in "+ guesses +" attempts.")
    } 
    });
}
guesses_number();


