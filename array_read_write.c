#include <stdio.h>

int main() {
    int index, choice;
    // Initialize array with 0.0 to avoid garbage values
    double array[10] = {0.0}; 
    double value;

    do {
        // Display Menu
        printf("\n\n########## MENU ##########\n");
        printf("[1] Write to Array\n");
        printf("[2] Read from Array\n");
        printf("[-1] Exit\n");
        printf("##########################\n");
        printf("Make a choice: ");
        scanf("%d", &choice);

        // Exit Condition
        if(choice == -1) {
            printf("Exiting program...\n");
            break;
        }

        // Validate Choice (Only 1 or 2 are allowed)
        if(choice != 1 && choice != 2) {
            printf("Invalid choice! Please try again.\n");
            continue; // Skip the rest of the loop and start over
        }

        // Get Array Index
        printf("Enter array index (0-9): ");
        scanf("%d", &index);

        // Validate Index (Must be within bounds)
        if(index < 0 || index > 9) {
            printf("Error: Index must be between 0 and 9!\n");
            continue;
        }

        // Perform Operation
        switch(choice) {
            case 1: // Write
                printf("Enter value to write: ");
                scanf("%lf", &value); // Use %lf for double
                array[index] = value;
                printf("Successfully saved %.2f to index [%d].\n", value, index);
                break;

            case 2: // Read
                printf("Value at array[%d] is: %.2f\n", index, array[index]);
                break;
        }

    } while(choice != -1);

    return 0;
}
