#include <stdio.h>

// Function Prototypes (Menu)
void menu();
int min();
int max();
int square();
int cube();
int abs_val();

int main() {
    int choice; 

    // Do-While Loop: Runs at least once and repeats until user exits
    do {
        menu();
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Result: %d\n", min());
                break;
            case 2:
                printf("Result: %d\n", max());
                break;
            case 3:
                printf("Result: %d\n", square());
                break;
            case 4:
                printf("Result: %d\n", cube());
                break;
            case 5:
                printf("Result: %d\n", abs_val());
                break;
            case 6:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid value! Please try again.\n");
        }
        
        printf("\n----------------------------\n"); 

    } while(choice != 6);

    return 0;
}

// Function Definitions

void menu() {
    printf("\n************\n");
    printf("*   MENU   *\n");
    printf("************\n");
    printf("1. Min\n");
    printf("2. Max\n");
    printf("3. Square\n");
    printf("4. Cube\n");
    printf("5. Absolute Value\n");
    printf("6. Exit");
}

int min() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    if(x > y)
        return y;
    else
        return x;
}

int max() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    if(x > y)
        return x;
    else
        return y;
}

int square() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    return x * x;
}

int cube() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    return x * x * x;
}

int abs_val() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if(x < 0)
        return x * -1;
    else
        return x;
}
