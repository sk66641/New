#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guess, numberToGuess, attempts = 0;
    srand(time(NULL));  // Seed the random number generator with the current time
    
    // Generate a random number between 1 and 100
    numberToGuess = rand() % 5 + 1;
    
    printf("Welcome to the Number Guessing Game!\n");
    printf("Try to guess a number between 1 and 5.\n");
    
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        
        if (guess < numberToGuess) {
            printf("Try a higher number.\n");
        } else if (guess > numberToGuess) {
            printf("Try a lower number.\n");
        } else {
            printf("Congratulations! You've guessed the number %d in %d attempts.\n", numberToGuess, attempts);
            break;
        }
    } while (1);  // Keep looping until the correct number is guessed
    
    return 0;
}
