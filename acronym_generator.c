#include <stdio.h>

// Function Prototype
void print_initials(char* ptr);

int main() {
    char message[100];
    
    printf("Enter a sentence to generate acronym:\n");
    // fgets reads the input including spaces
    fgets(message, sizeof(message), stdin);
    
    printf("Acronym / Initials: ");
    print_initials(message);
    
    return 0;
}

void print_initials(char* ptr) {
    int i = 0;
    
    // 1. Print the very first character of the sentence
    // (Assuming the sentence doesn't start with a space)
    if (ptr[0] != '\0' && ptr[0] != ' ') {
        putchar(ptr[0]);
    }

    // 2. Loop through the string
    while (*(ptr + i) != '\0') {
        
        // Logic: If we find a SPACE, the NEXT character is a start of a new word.
        if (*(ptr + i) == ' ') {
            
            // Safety Check: Ensure the next char exists and is not a newline
            if (*(ptr + i + 1) != '\0' && *(ptr + i + 1) != '\n') {
                putchar(*(ptr + i + 1));
            }
        }
        i++;
    }
    putchar('\n'); // Final newline for clean output
}
