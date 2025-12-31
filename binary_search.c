#include <stdio.h>
#define SIZE 20 

int main() {
    int arr[SIZE], n, i, val;
    int beg, mid, end;
    int pos = -1; // -1 means "Not Found" initially

    printf("Enter the number of elements (Max %d): ", SIZE);
    scanf("%d", &n);

    // CRITICAL: Binary Search requires sorted input!
    printf("Enter %d elements (MUST BE SORTED in Ascending Order):\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to be searched: ");
    scanf("%d", &val);

    // BINARY SEARCH LOGIC
    beg = 0;
    end = n - 1;

    while(beg <= end) {
        mid = (beg + end) / 2; // Find the middle index

        if(arr[mid] == val) {
            pos = mid; // Found it!
            printf("Success! %d is found at index: %d\n", val, pos);
            break; // Stop searching
        }
        else if(arr[mid] > val) {
            // If middle is greater than value, ignore the right half
            end = mid - 1;
        }
        else {
            // If middle is smaller than value, ignore the left half
            beg = mid + 1;
        }
    }

    if(pos == -1) {
        printf("Result: %d doesn't exist in the array.\n", val);
    }

    return 0;
}
