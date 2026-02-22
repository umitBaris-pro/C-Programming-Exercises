#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double x_start, x_end;
    double x;

    printf("--- Dynamic Parabola Plotter: f(x) = ax^2 + bx + c ---\n\n");
    
    // 1. Get coefficients from the user
    printf("Enter coefficient 'a': "); scanf("%lf", &a);
    printf("Enter coefficient 'b': "); scanf("%lf", &b);
    printf("Enter coefficient 'c': "); scanf("%lf", &c);
    
    // 2. Get the domain (range of x)
    printf("Enter starting x value : "); scanf("%lf", &x_start);
    printf("Enter ending x value   : "); scanf("%lf", &x_end);

    printf("\nGenerating Graph for: f(x) = %.1fx^2 + %.1fx + %.1f\n", a, b, c);
    printf("---------------------------------------------------\n");

    // 3. Loop through the domain and plot
    for (x = x_start; x <= x_end; x += 0.5) {
        
        // Apply the quadratic function rule: f(x) = ax^2 + bx + c
        double y = (a * pow(x, 2)) + (b * x) + c;
        
        // Print the x-axis label on the left
        printf("%5.1f |", x);

        // Coordinate Shifting: Add an offset of 20 to handle negative 'y' values.
        // This shifts the virtual Y-axis 20 characters to the right.
        int offset = (int)y + 20; 
        
        // Safeguard: If y is too negative, keep it at the edge of the screen
        if (offset < 0) offset = 0;

        int i;
        for (i = 0; i < offset; i++) {
            if (i == 20) {
                printf("|"); // Draw the virtual Y-axis
            } else {
                printf(" "); // Empty space
            }
        }
        
        // Print the actual point of the parabola
        printf("*\n");
    }

    printf("---------------------------------------------------\n");
    return 0;
}
