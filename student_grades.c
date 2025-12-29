#include <stdio.h>

int main(){
    int i, numStudents;
    int minScore, maxScore;
    int sum = 0;       
    float average;      

    printf("Enter number of students: ");
    scanf("%d", &numStudents);

    int scores[numStudents];
    int studentIDs[numStudents];

    printf("\nEnter student IDs and scores:\n");
    for(i = 0; i < numStudents; i++){
        printf("ID and Score for student %d: ", i + 1);
        scanf("%d %d", &studentIDs[i], &scores[i]);
        sum += scores[i];
    }

    // Initialize min and max to the first student's score
    minScore = scores[0];
    maxScore = scores[0];

    for(i = 0; i < numStudents; i++){
        if(scores[i] < minScore){
            minScore = scores[i];
        }
        if(scores[i] > maxScore){
            maxScore = scores[i];
        }
    }

    // Calculate Average
    average = (float)sum / numStudents; 

    // --- Output Section ---
    
    printf("\n----------------------------\n");
    printf("Class Statistics\n");
    printf("----------------------------\n");
    printf("Class Average: %.2f\n", average); 

    printf("Lowest Score (%d) belongs to student(s): ", minScore);
    for(i = 0; i < numStudents; i++){
        if(scores[i] == minScore){
            printf("[%d] ", studentIDs[i]);
        }
    }
    printf("\n");

    printf("Highest Score (%d) belongs to student(s): ", maxScore);
    for(i = 0; i < numStudents; i++){
        if(scores[i] == maxScore){
            printf("[%d] ", studentIDs[i]);
        }
    }
    printf("\n");

    return 0;
}
