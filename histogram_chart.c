#include <stdio.h>

#define SIZE 5 // Define a constant for array size

int main() {
    // Initialize array with pre-defined values
    int n[SIZE] = {19, 3, 15, 7, 11};
    int i, j;
    
    printf("Element\tValue\tHistogram\n");
    
    // Outer Loop: Iterate through each element of the array
    for(i = 0; i < SIZE; i++) {
        
        printf("%d\t%d\t", i, n[i]); // Print index and value
        
        // Inner Loop: Print stars equal to the value of n[i]
        for(j = 1; j <= n[i]; j++) {
            printf("*");
        }
        
        printf("\n"); // Move to next line for the next bar
    }
    
    return 0;
}
