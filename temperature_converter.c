#include <stdio.h>

// Function Prototypes
float fahtocel();
float celtofah();
float celtokel();
float keltocel();

int main() {
    char choice;

    do {
        // Display Menu
        printf("\n--- Temperature Converter ---\n");
        printf("[c] Fahrenheit -> Celsius\n");
        printf("[f] Celsius    -> Fahrenheit\n");
        printf("[k] Celsius    -> Kelvin\n");
        printf("[l] Kelvin     -> Celsius\n");
        printf("[e] Exit\n");
        printf("Choice: ");
        
        scanf(" %c", &choice);

        switch(choice) {
            case 'c': 
                printf("Result: %.2f Celsius\n", fahtocel()); 
                break;
            case 'f': 
                printf("Result: %.2f Fahrenheit\n", celtofah()); 
                break;
            case 'k': 
                printf("Result: %.2f Kelvin\n", celtokel()); 
                break;
            case 'l': 
                printf("Result: %.2f Celsius\n", keltocel()); 
                break;
            case 'e': 
                printf("\nExiting program...\n"); 
                break;
            default:  
                printf("Invalid choice, please try again.\n");
        }
    } while(choice != 'e');

    return 0;
}

// Function Definitions

float fahtocel() {
    float fah;
    printf("Enter degree in Fahrenheit: ");
    scanf("%f", &fah);
    return (fah - 32) * 5.0 / 9.0;
}

float celtofah() {
    float cel;
    printf("Enter degree in Celsius: ");
    scanf("%f", &cel);
    return (cel * 9.0 / 5.0) + 32;
}

float celtokel() {
    float cel;
    printf("Enter degree in Celsius: ");
    scanf("%f", &cel);
    return cel + 273.15;
}

float keltocel() {
    float kel;
    printf("Enter degree in Kelvin: ");
    scanf("%f", &kel);
    
    while(kel < 0) {
        printf("Error: Kelvin cannot be negative (Absolute Zero).\n");
        printf("Please enter a positive value: ");
        scanf("%f", &kel);
    }
    
    return kel - 273.15;
}
