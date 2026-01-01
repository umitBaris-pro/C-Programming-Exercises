#include <stdio.h>
#define SIZE 20

int main() {
    int arr[SIZE], n, i, val;
    int low, high, mid, pos = -1;

    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);

    // CRITICAL: Interpolation Search also requires SORTED data!
    printf("\nEnter %d elements (MUST BE SORTED): ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nEnter the value that has to be searched: ");
    scanf("%d", &val);

    low = 0;
    high = n - 1;

    // Condition Explanation:
    // 1. low <= high: Standard search range check
    // 2. val >= arr[low] && val <= arr[high]: Since the formula uses 'val' to estimate
    //    position, we MUST ensure 'val' is actually within the current range.
    //    Otherwise, 'mid' could be calculated as -5 or 1000 (Segmentation Fault).
    while(low <= high && val >= arr[low] && val <= arr[high]) {
        
        // INTERPOLATION FORMULA
        mid = low + (((double)(high - low) / (arr[high] - arr[low])) * (val - arr[low]));

        if(arr[mid] == val) {
            pos = mid;
            printf("Success! %d is found at position %d\n", val, pos);
            break;
        }

        if(arr[mid] < val)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(pos == -1)
        printf("\nResult: %d does not exist in the array.\n", val);

    return 0;
}
