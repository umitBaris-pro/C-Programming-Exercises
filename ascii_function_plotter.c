#include <stdio.h>
#include <math.h> // Required for pow() function

int main() {
    // Domain set [-2, 5]
    double x_start = -2.0;
    double x_end = 5.0;
    double x;
    int i;
    
    printf("   Graph of f(x) = x^2 + 2 \n\n");
    
    // Outer loop: Iterate through the domain (x-axis, printed vertically)
    for (x = x_start; x <= x_end; x += 0.5) {
        
        // Calculate the function value (y-axis, printed horizontally)
        double y = pow(x, 2) + 2; 
        
        // Print the x-axis label on the left
        printf("%5.1f |", x);

        // Inner loop: Draw the horizontal line representing f(x)
        for (i = 0; i <= 30; i++) {
            
            if (i == (int)y) {
                printf("*"); // The plotted point of the function
            } 
            else if (x == 0.0 && i == 0) {
                printf("+"); // Origin marker
            } 
            else if (x == 0.0) {
                printf("-"); // Draw the x=0 axis line
            } 
            else {
                printf(" "); // Empty space
            }
        }
        printf("\n");
    }
    
    // Draw the bottom axis scale for f(x)
    printf("      +---------------------------------> f(x)\n");
    printf("      0    5    10   15   20   25   30\n");

    return 0;
}
