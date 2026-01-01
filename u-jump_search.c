#include <stdio.h>
#include <math.h> 

#define SIZE 20

int main() {
    int arr[SIZE], val, n, i, pos = -1;
    int step, start, end;

    printf("Enter number of elements (Max %d): ", SIZE);
    scanf("%d", &n);

    printf("\nEnter %d elements (MUST BE SORTED): \n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nEnter the value to be searched: ");
    scanf("%d", &val);

    start = 0;
    step = sqrt(n);
    end = step;

    printf("\n[Log] Jumping with step size: %d\n", step);

    while(end < n && arr[end] <= val) {
        printf("[Log] Jumping... Start: %d, End: %d\n", start, end);
        start = end;
        end = end + step;
        
        if(end > n - 1)
            end = n;
    }

    printf("[Log] Performing Linear Search between indices %d and %d\n", start, end);
    
    for(i = start; i < end; i++) {
        if(arr[i] == val) {
            pos = i;
            printf("Success! %d is found at index %d\n", val, pos);
            break;
        }
    }

    if(pos == -1)
        printf("\nResult: %d does not exist in the array.\n", val);

    return 0;
}
