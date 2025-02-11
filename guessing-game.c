#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 5;
    int outOfGuesses = 0; // Use this like a boolean variable

    while(guess != secretNumber && outOfGuesses == 0){
        if(guessCount < guessLimit){
            printf("Enter your guess: ");
            scanf("%d", &guess);
            guessCount++;
        } else {
            outOfGuesses = 1;
        }
    }
    if (outOfGuesses == 1){
        printf("You are out of guesses :'(");
    } else {
        printf("You win!");
    }

    return 0;
}
