#include <stdio.h>
#include <string.h>
#include "report.h"

void report(struct Students s[], int n) {
    printf("\nID\tName\tTotal\tPercentage\tGrade\n");
    printf("-------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t%s\t%d\t%.2f\t\t%s\n",
               s[i].id, s[i].name, s[i].total,
               s[i].percentage, s[i].grade);
    }
}


void Stats(struct Students s[], int n) {
    float sum = 0, max = s[0].percentage, min = s[0].percentage;
    int gradeCount[8] = {0};

    for (int i = 0; i < n; i++) {
        sum += s[i].percentage;
        if (s[i].percentage > max) max = s[i].percentage;
        if (s[i].percentage < min) min = s[i].percentage;

        if (!strcmp(s[i].grade, "O")) gradeCount[0]++;
        else if (!strcmp(s[i].grade, "A+")) gradeCount[1]++;
        else if (!strcmp(s[i].grade, "A")) gradeCount[2]++;
        else if (!strcmp(s[i].grade, "B+")) gradeCount[3]++;
        else if (!strcmp(s[i].grade, "B")) gradeCount[4]++;
        else if (!strcmp(s[i].grade, "C")) gradeCount[5]++;
        else if (!strcmp(s[i].grade, "D")) gradeCount[6]++;
        else gradeCount[7]++;
    }

    printf("\nClass Average: %.2f\n", sum / n);
    printf("Highest Percentage: %.2f\n", max);
    printf("Lowest Percentage: %.2f\n", min);

    printf("\nGrade Distribution:\n");
    printf("O: %d\nA+: %d\nA: %d\nB+: %d\nB: %d\nC: %d\nD: %d\nF: %d\n",
           gradeCount[0], gradeCount[1], gradeCount[2], gradeCount[3],
           gradeCount[4], gradeCount[5], gradeCount[6], gradeCount[7]);
}
