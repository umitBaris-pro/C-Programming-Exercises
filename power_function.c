#include <stdio.h>

// Function Prototype
float power(float x, int y);

int main() {
    float base;
    int exponent;
    printf("Enter numbers(base^exponent):");
    scanf("%f %d",&base,&exponent);

    // Call the function and print result
    printf("The result of %.1f^%d is: %.4f\n", base, exponent, power(base, exponent));
    
    return 0;
}

// Function Definition
// Calculates x raised to the power of y (x^y)
float power(float x, int y) {
    float result = 1.0;
    int i;

    if (y >= 0) {
        // Positive exponent: multiply x, y times
        for (i = 1; i <= y; i++) {
            result *= x;
        }
    } else {
        // Negative exponent: multiply (1/x), -y times
        // Logic: x^-n = (1/x)^n
        for (i = 1; i <= -y; i++) {
            result *= (1.0 / x);
        }
    }

    return result;
}
