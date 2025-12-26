#include <stdio.h>

int main() {
    int x, y, gcd, lcm, i, small;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    // Find the smaller number to limit the loop
    if(x < y) {
        small = x;
    } else {
        small = y;
    }

    // Logic: Brute-force search for Greatest Common Divisor (GCD)
    // We check every number from 1 up to the smaller input
    for(i = 1; i <= small; i++) {
        if(x % i == 0 && y % i == 0) {
            gcd = i; // Update gcd whenever a common divisor is found
        }
    }

    // Logic: Calculate LCM using the formula: (x * y) = GCD * LCM
    lcm = (x * y) / gcd;

    printf("GCD : %d\n", gcd);
    printf("LCM : %d\n", lcm);

    return 0;
}
