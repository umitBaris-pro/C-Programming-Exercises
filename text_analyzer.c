#include <stdio.h>
#include <ctype.h> 

// Function Prototype
void analyze_text(char* ptr);

int main() {
    char sentence[200];

    printf("Enter a paragraph to analyze:\n");
    fgets(sentence, sizeof(sentence), stdin);

    analyze_text(sentence);

    return 0;
}

void analyze_text(char* ptr) {
    int i;
    int letter_counts[26] = {0}; // Initialize to zero
    int word_count = 0;
    int in_word = 0; // Flag to track if we are inside a word

    // --- LOOP THROUGH THE STRING ---
    for (i = 0; *(ptr + i) != '\0'; i++) {
        
        char current = tolower(*(ptr + i));

        // 1. LETTER FREQUENCY LOGIC
        if (current >= 'a' && current <= 'z') {
            letter_counts[current - 'a']++;
        }

        // 2. WORD COUNT LOGIC
        // If current char is a letter/number, we are in a word
        if (*(ptr + i) != ' ' && *(ptr + i) != '\n' && *(ptr + i) != '\t') {
            if (in_word == 0) {
                word_count++; // New word started
                in_word = 1;
            }
        } else {
            in_word = 0; // Word ended
        }
    }

    // --- OUTPUT RESULTS ---
    printf("\n--- Text Analysis Report ---\n");
    printf("Total Words: %d\n\n", word_count);
    
    printf("Letter Frequency:\n");
    printf("Letter\tCount\n");
    printf("------\t-----\n");
    
    for (i = 0; i < 26; i++) {
        if (letter_counts[i] > 0) {
            // Print chart only for existing letters
            printf("%c\t%d\n", 'a' + i, letter_counts[i]);
        }
    }
}
