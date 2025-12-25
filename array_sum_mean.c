#include <stdio.h>

int main() {
    int n, i, sum = 0, arr[20];
    float mean = 0.0;

    printf("Enter the number of elements (max 20): ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter element arr[%d]: ", i);
        scanf("%d", &arr[i]);
        
        // Add current element to sum immediately
        sum += arr[i];
    }

    // Calculate mean
    // We use (float) to force floating-point division
    mean = (float)sum / n;

    printf("\nThe sum is: %d\n", sum);
    printf("The mean is: %.2f\n", mean);

    return 0;
}
