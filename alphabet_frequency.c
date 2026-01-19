#include <stdio.h>

// Function Prototype
void calculate_frequency(char text[], int freq[]);

int main() {
    char text[100]; 
    int frequency[26];
    int i = 0;

    printf("Enter a sentence (End with '.'): \n");

    // Input Loop
    do {
        scanf("%c", &text[i]);
        i++;
    } while (text[i-1] != '.' && i < 99); 

    text[i] = '\0'; 

    // Process the text
    calculate_frequency(text, frequency);

    // Output Results
    printf("\n--- Character Frequency ---\n");
    for (i = 0; i < 26; i++) {
        if (frequency[i] > 0) {
            printf("%c / %c : %d\n", 'A' + i, 'a' + i, frequency[i]);
        }
    }

    return 0;
}

void calculate_frequency(char text[], int freq[]) {
    int i;

    // 1. Initialize frequency array to 0
    for (i = 0; i < 26; i++) {
        freq[i] = 0;
    }

    // 2. Iterate through the text
    for (i = 0; text[i] != '\0'; i++) {
        
        // Logic for Uppercase (A-Z)
        // 'A' is 65 in ASCII. If text[i] is 'C' (67), index = 67-65 = 2.
        if (text[i] >= 'A' && text[i] <= 'Z') {
            freq[text[i] - 'A']++;
        }
        
        // Logic for Lowercase (a-z)
        // 'a' is 97 in ASCII. If text[i] is 'c' (99), index = 99-97 = 2.
        if (text[i] >= 'a' && text[i] <= 'z') {
            freq[text[i] - 'a']++;
        }
    }
}
