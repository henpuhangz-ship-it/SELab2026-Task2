#include <stdio.h>
#include <string.h>
#include "report.h"

void Report(Student students[], int n) {
    printf("\n================ STUDENT REPORT ================\n");
    printf("ID\tName\t\tMarks\t\t\tTotal\t%%\tGrade\tCGPA\n");
    printf("--------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%s\t%-10s\t", students[i].id, students[i].name);

        for (int j = 0; j < SUBJECTS; j++)
            printf("%d ", students[i].marks[j]);

        printf("\t%d\t%.2f\t%s\t%.2f\n",
               students[i].total,
               students[i].percentage,
               students[i].grade,
               students[i].cgpa);
    }
}

void Statistics(Student students[], int n) {
    float sum = 0;
    float highest = students[0].percentage;
    float lowest = students[0].percentage;

    int highIndex = 0, lowIndex = 0;
    int gradeCount[8] = {0};

    for (int i = 0; i < n; i++) {
        sum += students[i].percentage;

        if (students[i].percentage > highest) {
            highest = students[i].percentage;
            highIndex = i;
        }
        if (students[i].percentage < lowest) {
            lowest = students[i].percentage;
            lowIndex = i;
        }

        if (strcmp(students[i].grade, "O") == 0) gradeCount[0]++;
        else if (strcmp(students[i].grade, "A+") == 0) gradeCount[1]++;
        else if (strcmp(students[i].grade, "A") == 0) gradeCount[2]++;
        else if (strcmp(students[i].grade, "B+") == 0) gradeCount[3]++;
        else if (strcmp(students[i].grade, "B") == 0) gradeCount[4]++;
        else if (strcmp(students[i].grade, "C") == 0) gradeCount[5]++;
        else if (strcmp(students[i].grade, "D") == 0) gradeCount[6]++;
        else gradeCount[7]++;
    }

    printf("\n================ STATISTICS =================\n");
    printf("Class Average Percentage: %.2f\n", sum / n);
    printf("Highest Percentage: %.2f (ID: %s)\n", highest, students[highIndex].id);
    printf("Lowest Percentage : %.2f (ID: %s)\n", lowest, students[lowIndex].id);

    printf("\nGrade Distribution:\n");
    printf("O  : %d\nA+ : %d\nA  : %d\nB+ : %d\nB  : %d\nC  : %d\nD  : %d\nF  : %d\n",
           gradeCount[0], gradeCount[1], gradeCount[2],
           gradeCount[3], gradeCount[4], gradeCount[5],
           gradeCount[6], gradeCount[7]);
}
