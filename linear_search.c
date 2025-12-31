#include <stdio.h>

int main() {
    int i, count, search_num;
    int pos = -1; // Initialize position as -1 (Not Found)
    int a[100];   // Array with capacity of 100

    // 1. INPUT: Number of elements
    printf("Enter number of elements (Max 100): ");
    scanf("%d", &count);

    // 2. INPUT: Array elements
    printf("Enter %d integers:\n", count);
    for(i = 0; i < count; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &a[i]);
    }

    // 3. INPUT: Target number to search
    printf("\nEnter the number to search: ");
    scanf("%d", &search_num);

    // 4. SEARCH ALGORITHM (Linear Search)
    // Check every element one by one
    for(i = 0; i < count; i++) {
        if(a[i] == search_num) {
            pos = i; // Store the index where number is found
            break;   // Element found, stop searching!
        }
    }

    // 5. OUTPUT: Display result
    if(pos == -1) {
        printf("Result: Number %d NOT found in the array.\n", search_num);
    } else {
        printf("Result: Number %d found at index [%d].\n", search_num, pos);
    }

    return 0;
}
