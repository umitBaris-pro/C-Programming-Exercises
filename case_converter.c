#include <stdio.h>

// Function Prototypes
void upperToLower(char* ptr);
void lowerToUpper(char* ptr);

int main() {
    int choice;
    char message[100];

    printf("--- String Case Converter ---\n");
    printf("[1] Convert Upper -> Lower\n");
    printf("[2] Convert Lower -> Upper\n");
    printf("Make a choice: ");

    // Input Validation: Check if user entered an integer
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input! Please enter a number.\n");
        return 1;
    }

    // Buffer Cleaning: Consume the '\n' character left by scanf
    // If we don't do this, fgets will read the empty line and skip input.
    getchar();

    switch(choice) {
        case 1:
            printf("\nEnter a sentence to convert to LOWER case:\n");
            fgets(message, sizeof(message), stdin);
            printf("Result: ");
            upperToLower(message);
            break;

        case 2:
            printf("\nEnter a sentence to convert to UPPER case:\n");
            fgets(message, sizeof(message), stdin);
            printf("Result: ");
            lowerToUpper(message);
            break;

        default:
            printf("\nInvalid choice! Please restart.\n");
    }

    return 0;
}

// Function to convert string to Lowercase using Pointers
void upperToLower(char* ptr) {
    // Loop continues until *ptr points to the null terminator '\0'
    for (; *ptr != '\0'; ptr++) {
        // ASCII Logic: 'A'(65) + 32 = 'a'(97)
        if (*ptr >= 'A' && *ptr <= 'Z') {
            putchar(*ptr + 32);
        } else {
            putchar(*ptr);
        }
    }
}

// Function to convert string to Uppercase using Pointers
void lowerToUpper(char* ptr) {
    // Loop continues until *ptr points to the null terminator '\0'
    for (; *ptr != '\0'; ptr++) {
        // ASCII Logic: 'a'(97) - 32 = 'A'(65)
        if (*ptr >= 'a' && *ptr <= 'z') {
            putchar(*ptr - 32);
        } else {
            putchar(*ptr);
        }
    }
}
