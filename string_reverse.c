#include <stdio.h>

// Function Prototype
void reverse_string(char* ptr);

int main() {
    char message[100];

    printf("Enter a sentence to reverse:\n");
    fgets(message, sizeof(message), stdin);

    printf("Reversed Sentence: ");
    reverse_string(message);
    printf("\n");

    return 0;
}

void reverse_string(char* ptr) {
    int i = 0;
    int last_index;

    // 1. Calculate the length of the string manually (like strlen)
    while (*(ptr + i) != '\0') {
        i++;
    }

    // i is now at the null terminator '\0'. 
    
    last_index = i - 1;

    // FIX: fgets adds a newline '\n' at the end. 
    // If the last char is '\n', skip it to make output look better.
    if (*(ptr + last_index) == '\n') {
        last_index--;
    }

    // 2. Print backwards from last_index down to 0
    for (i = last_index; i >= 0; i--) {
        putchar(*(ptr + i));
    }
}
