#include <stdio.h>

int main() {
    int rows, i, j, space, number;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Outer Loop: Iterate through each row
    for(i = 0; i < rows; i++) {
        
        // Loop 1: Print leading spaces for pyramid shape
        for(space = 1; space < rows - i; space++) {
            printf("  ");
        }

        // Loop 2: Calculate and print numbers in the row
        for(j = 0; j <= i; j++) {
            
            // First and last element of each row is always 1
            if (j == 0 || i == 0) {
                number = 1;
            } else {
                // Mathematical formula to find the next value using the previous one
                // Formula: number = number * (row - col + 1) / col
                number = number * (i - j + 1) / j;
            }
            
            printf("%4d", number); // %4d ensures proper spacing between numbers
        }
        
        printf("\n"); // Move to the next line
    }

    return 0;
}
