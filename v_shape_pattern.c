#include <stdio.h>

int main() {
    int row, i, j;
    char letter;

    // Get input from user
    printf("Enter number of rows (odd number): ");
    scanf("%d", &row);

    printf("Enter the letter: ");
    scanf(" %c", &letter);

    // Loop through each row
    for(i = 1; i <= row; i++) {
        
        // Upper Half (including the middle row)
        if(i <= (row + 1) / 2) {
            // Print spaces increasing: 1, 2, 3...
            for(j = 1; j < i; j++) {
                printf(" ");
            }
        } 
        // Lower Half
        else {
            // Print spaces decreasing using formula: row - i
            for(j = 1; j <= row - i; j++) {
                printf(" ");
            }
        }

        // Print the character at the end of spaces
        printf("%c\n", letter);
    }

    return 0;
}
