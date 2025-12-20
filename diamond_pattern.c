#include <stdio.h>

int main() {
    int i, j, n;
    
    printf("Enter number of rows (half of diamond): ");
    scanf("%d", &n);

    // -----------------------------------------
    // UPPER PART (Piramit)
    // -----------------------------------------
    for(i = 1; i <= n; i++) {
        // Print spaces
        for(j = 1; j <= n - i; j++) {
            printf("  ");
        }
        // Print stars (1, 3, 5...)
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // -----------------------------------------
    // LOWER PART (Ters Piramit)
    // -----------------------------------------
    // TRICK: Start loop from n-1 and go down to 1.
    // This allows us to use the EXACT SAME logic as above!
    for(i = n - 1; i >= 1; i--) {
        
        // Print spaces (Same logic: n - i)
        for(j = 1; j <= n- i; j++) {
            printf("  ");
        }
        
        // Print stars (Same logic: 2*i - 1)
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
