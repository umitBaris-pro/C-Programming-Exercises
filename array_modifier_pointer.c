#include <stdio.h>

// Function Prototype: Accepts an integer pointer (array address) and its size
void modify_array(int* ptr, int size);

int main() {
    int numbers[6] = {1, 7, 19, 23, 5, 11};
    int size = sizeof(numbers) / sizeof(int);
    int i;
    
    printf("--- Array Pointer Arithmetic ---\n\n");
    
    // 1. Print Previous State
    printf("Previous state (Original Array):\n");
    for (i = 0; i < size; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }
    
    // 2. Call the function by passing the array's base address
    modify_array(numbers, size);
    
    // 3. Print Next State (Modified Array)
    printf("\nNext state (After calling function):\n");
    for (i = 0; i < size; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }
    
    return 0;
}

// Function that modifies the original array in memory
void modify_array(int* ptr, int size) {
    int i;
    // Iterate through memory addresses using pointer arithmetic
    for (i = 0; i < size; i++) {
        // Go to address (ptr + i), multiply its value by 3, and save it back
        *(ptr + i) = *(ptr + i) * 3;
    }
}
