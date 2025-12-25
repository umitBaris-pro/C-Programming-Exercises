#include <stdio.h>

int main() {
    int arr[20]; // Declare an array of size 20
    int i, n;

    // Get the number of elements from the user
    printf("Enter the number of elements (max 20): ");
    scanf("%d", &n);

    // Loop 1: Input elements into the array
    for(i = 0; i < n; i++) {
        printf("Enter element arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Loop 2: Print the array elements
    printf("\nThe array elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d\t", arr[i]); // \t prints a tab space between numbers
    }
    printf("\n");

    return 0;
}
