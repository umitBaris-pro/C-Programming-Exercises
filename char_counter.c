#include <stdio.h>

// Function Prototype
void count_vowels(char str[]);

int main() {
    char sentence[100];
    int i = 0;
    
    printf("Enter a sentence (End with '.'): \n");
    
    // Character-by-character input loop
    do {
        scanf("%c", &sentence[i]);
        i++;
    } while (sentence[i-1] != '.' && i < 99); 

    // Null-terminate the string manually to make it a valid C-string
    sentence[i] = '\0'; 
    
    // Call the function
    count_vowels(sentence);
    
    return 0;
}

void count_vowels(char str[]) {
    int i;
    int a_counter = 0;
    int e_counter = 0;
    
    // Loop until we hit the period or null terminator
    for (i = 0; str[i] != '\0'; i++) {
        
        // Check for 'A' or 'a'
        if (str[i] == 'A' || str[i] == 'a') {
            a_counter++;
        }
        
        // Check for 'E' or 'e'
        if (str[i] == 'E' || str[i] == 'e') {
            e_counter++;
        }
    }
    
    printf("\n--- Results ---\n");
    printf("Total 'A' or 'a': %d\n", a_counter);
    printf("Total 'E' or 'e': %d\n", e_counter);
}
