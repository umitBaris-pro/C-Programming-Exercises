#include <stdio.h>

int main() {
    int n, i, small, arr[20], pos;
    
    printf("Enter the number of elements in the array (max 20): ");
    scanf("%d", &n);

    // Step 1: Input all elements
    for(i = 0; i < n; i++) {
        printf("Enter the arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Step 2: Initialize 'small' with the first element
    // We assume the first number is the smallest initially
    small = arr[0];
    pos = 0;

    // Step 3: Compare with the rest of the array
    // Start from i=1 because we already took arr[0]
    for(i = 1; i < n; i++) {
        if(arr[i] < small) { // Compare current element with 'small'
            small = arr[i];  // Update small value
            pos = i;         // Update position index
        }
    } 

    printf("\nThe smallest element is = %d", small);
    printf("\nThe position of the smallest element is = %d\n", pos);
    
    return 0;
}
