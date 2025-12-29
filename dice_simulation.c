#include <stdio.h>
#include <stdlib.h> // For rand() and srand()
#include <time.h>   // For time()

int main() {
    // Array size is 7 so we can use indices 1 to 6 directly.
    // Index 0 is ignored. Initialized to 0.
    int i, dice, counter[7] = {0};

    // Seed the random number generator using current time
    srand(time(NULL));

    printf("Rolling the dice 100 times...\n");

    // Loop 100 times to simulate rolling
    for(i = 1; i <= 100; i++) {
        // Generate number between 1 and 6
        dice = rand() % 6 + 1;
        
        // Increment the counter for that specific number directly
        counter[dice]++;
    }

    // Output Results
    printf("\n--- Results ---\n");
    printf("Face\tFrequency\n"); 
    printf("----\t---------\n");

    for(i = 1; i <= 6; i++) {
        printf("[%d]\t%d times\n", i, counter[i]);
    }

    return 0;
}
