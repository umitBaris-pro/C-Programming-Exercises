#include <stdio.h>

int main() {
    int i, j;
    char input, current_char = 'A';

    printf("Enter an uppercase character (e.g., E): ");
    scanf(" %c", &input); 

    // Loop logic: Calculate number of rows based on ASCII difference
    // Example: If input is 'C', loop runs ('C' - 'A' + 1) = 3 times
    for(i = 1; i <= (input - 'A' + 1); i++) {
        
        // Inner Loop: Print the current character 'i' times
        for(j = 1; j <= i; j++) {
            printf("%c", current_char);
        }
        
        // Move to the next character for the next row
        current_char++;
        
        printf("\n"); // Move to next line
    }

    return 0;
}
