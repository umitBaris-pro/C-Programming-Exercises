#include <stdio.h>

// Define a Structure to group date-related data
struct Date {
    int day;
    int month;
    int year;
};

int main() {
    struct Date birthDate, currentDate;
    
    // Days in each month (Index 1 = Jan, Index 2 = Feb, etc.)
    // Index 0 is just a placeholder to align array with months 1-12
    int monthDays[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("--- AGE CALCULATOR ---\n");
    
    // 1. INPUT: Birth Date
    printf("Enter your date of birth (DD MM YYYY): ");
    if (scanf("%d %d %d", &birthDate.day, &birthDate.month, &birthDate.year) != 3) return 1;

    // 2. INPUT: Current Date
    printf("Enter today's date (DD MM YYYY): ");
    if (scanf("%d %d %d", &currentDate.day, &currentDate.month, &currentDate.year) != 3) return 1;

    // --- LEAP YEAR CHECK ---
    // If the current year is a leap year, convert Feb to 29 days.
    // Logic: Divisible by 4 AND (NOT divisible by 100 OR divisible by 400)
    if ((currentDate.year % 4 == 0 && currentDate.year % 100 != 0) || (currentDate.year % 400 == 0)) {
        monthDays[2] = 29;
    }

    // --- CALCULATION LOGIC ---

    // A. Subtract Days
    if (currentDate.day < birthDate.day) {
        // Borrow days from the PREVIOUS month
        int previousMonth = currentDate.month - 1;
        
        // Handle January (previous month becomes December)
        if (previousMonth == 0) {
            previousMonth = 12;
        }

        currentDate.day += monthDays[previousMonth];
        currentDate.month--; 
    }

    // B. Subtract Months
    if (currentDate.month < birthDate.month) {
        currentDate.month += 12;
        currentDate.year--;
    }

    // C. Output Result
    printf("\n[Result] You have lived:\n");
    printf("%d Years, %d Months, and %d Days.\n", 
           currentDate.year - birthDate.year, 
           currentDate.month - birthDate.month, 
           currentDate.day - birthDate.day);

    return 0;
}
