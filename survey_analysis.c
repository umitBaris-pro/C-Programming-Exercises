#include <stdio.h>
#define RESPONSES_SIZE 40
#define FREQUENCY_SIZE 11

int main() {
    // Initialize frequency array to 0
    // We use size 11 to allow indices 1 to 10 directly
    int frequency[FREQUENCY_SIZE] = {0};
    
    // Hardcoded survey data (40 responses)
    int responses[RESPONSES_SIZE] = {
        1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
        1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 
        6, 5, 7, 6, 8, 6, 7, 5, 6, 6,
        5, 6, 7, 5, 6, 4, 8, 6, 8, 10
    };
    
    int answer, rating;

    // PROCESS THE DATA
    // Iterate through all 40 responses
    for(answer = 0; answer < RESPONSES_SIZE; answer++) {
        // Example: If response is 5, increment frequency[5]
        frequency[responses[answer]]++;
    }

    // OUTPUT RESULTS
    printf("Rating\tFrequency\n");
    printf("------\t---------\n");

    // Loop from 1 to 10 (ratings)
    for(rating = 1; rating < FREQUENCY_SIZE; rating++) {
        printf("%4d\t%4d\n", rating, frequency[rating]);
    }

    return 0;
}
