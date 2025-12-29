#include <stdio.h>

int main() {
    int i, j, size, temp;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    // Variable Length Array (VLA) declaration
    int numbers[size];

    // Input loop
    for(i = 0; i < size; i++) {
        printf("Enter numbers[%d]: ", i);
        scanf("%d", &numbers[i]);
    }

    // -----------------------------------------
    // SORTING LOGIC (Bubble Sort)
    // -----------------------------------------
    // Outer loop: Runs size-1 times (passes)
    for(i = 0; i < size - 1; i++) {
        
        // Inner loop: Compares adjacent elements
        // "- i" optimization: The last i elements are already sorted, skip them.
        for(j = 0; j < size - i - 1; j++) {
            
            // Swap if the current element is greater than the next
            if(numbers[j] > numbers[j + 1]) {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Print the sorted results
    printf("\nSorted list (Ascending): ");
    for(i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
