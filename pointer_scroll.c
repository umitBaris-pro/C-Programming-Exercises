#include <stdio.h>

// Function Prototype
void scroll(char* characters, int size);

int main() {
    char characters[8] = {'s', 'o', 'f', 't', 'w', 'a', 'r', 'e'};
    int size = sizeof(characters) / sizeof(characters[0]);

    printf("Original Word: software\n\n");
    scroll(characters, size);

    return 0;
}

/**
 * Performs a circular shift/scroll effect on a character array
 * using pointer arithmetic.
 */
void scroll(char* characters, int size) {
    int i, j, k;

    // Outer loop controls the starting point of the shift
    for (i = 0; i < size + 1; i++) {
        
        // First inner loop: Prints characters from 'i' to the end
        for (j = i; j < size; j++) {
            // Using pointer arithmetic to access elements
            printf("%c", *(characters + j));
        }

        // Second inner loop: Prints the 'wrapped around' characters from start to 'i'
        for (k = 0; k < i; k++) {
            printf("%c", *(characters + k));
        }

        printf("\n"); // New line for each rotation step
    }
    printf("\n");
}
