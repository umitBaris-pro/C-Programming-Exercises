#include <stdio.h>

int main() {
    // 3 Students (Rows), 4 Exams (Columns)
    int stgrades[3][4] = {
        {77, 68, 86, 73},
        {96, 87, 89, 78},
        {70, 90, 86, 81}
    };
    
    int i, j, low, high, sum;
    float average;

    printf("The Array (Grade Table): \n");
    printf("\t\t\t[0] \t[1] \t[2]\t [3]\n");
    
    low = stgrades[0][0];
    high = stgrades[0][0];

    // --- LOOP 1: PRINT TABLE & FIND MIN/MAX ---
    // i represents Rows (Students)
    for(i = 0; i < 3; i++) {
        printf("Student [%d] grades:", i);
        
        // j represents Columns (Exams)
        for(j = 0; j < 4; j++) {
            printf("\t%d    ", stgrades[i][j]);

            // Check for global lowest grade
            if(stgrades[i][j] < low) {
                low = stgrades[i][j];
            }
            // Check for global highest grade
            if(stgrades[i][j] > high) {
                high = stgrades[i][j];
            }
        }
        printf("\n"); // New line after each student
    }

    printf("\nGlobal Highest Grade: %d\n", high);
    printf("Global Lowest Grade : %d\n", low);
    printf("-----------------------------\n");

    // --- LOOP 2: CALCULATE AVERAGE PER STUDENT ---
    for(i = 0; i < 3; i++) {
        sum = 0; 
        
        for(j = 0; j < 4; j++) {
            sum += stgrades[i][j];
        }
        
        average = (float)sum / 4.0;
        printf("Average of Student [%d]: %.2f\n", i, average);
    }

    return 0;
}
