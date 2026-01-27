#include <stdio.h>

// Function Prototype
// We accept a 'pointer to double' (memory address), not just a double.
double calculate_square(double *pntr);

int main() {
    double num, result;

    printf("Enter a number: ");
    scanf("%lf", &num);

    // CALL BY REFERENCE
    // We don't send the value of 'num'. 
    // We send the ADDRESS of 'num' using '&'.
    result = calculate_square(&num);

    printf("\nSquare of %.2f is: %.2f\n", num, result);

    return 0;
}

double calculate_square(double *pntr) {
    
    return (*pntr) * (*pntr);
}
