#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time()

int main() {
    int guessNum = 0, guessCount = 0, score = 100;
    int randNumber;

    // 1. Seed the random number generator
    srand(time(NULL));

    // 2. Generate a random number between 1 and 100
    randNumber = rand() % 100 + 1;

    printf("### Number Guessing Game ###\n");
    printf("I have picked a number between 1-100.\n");
    printf("Enter -1 to quit.\n\n");

    // 3. Game Loop
    while (guessNum != -1) {
        printf("Make a guess: ");
        scanf("%d", &guessNum);

        // Exit condition
        if (guessNum == -1) {
            printf("Game Over. The number was %d.\n", randNumber);
            break;
        }

        // Input Validation
        if (guessNum < 1 || guessNum > 100) {
            printf("Warning: Please enter a number between 1-100!\n");
            continue;
        }

        guessCount++;

        // 4. Check logic
        if (guessNum == randNumber) {
            printf("\nCONGRATS! You found it on the %d. attempt.\n", guessCount);
            // Ensure score doesn't show as negative
            printf("Your Score: %d\n", score < 0 ? 0 : score);
            break;
        } 
        else {
            // Hint Logic
            if (guessNum > randNumber) {
                printf("Too HIGH! Try a smaller value.\n");
            } else {
                printf("Too LOW! Try a greater value.\n");
            }
            
            // Penalty for wrong guess
            score -= 10;
        }
    }

    return 0;
}
