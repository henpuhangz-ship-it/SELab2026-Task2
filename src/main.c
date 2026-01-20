#include <stdio.h>
#include "student.h"
#include "report.h"
#include "result.h"
#include "validation.h"


int main() {
    struct Students s[MAX];
    int n;
    FILE *fp;

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fscanf(fp, "%d", &n);

    for (int i = 0; i < n; i++) {

        fscanf(fp, "%s", s[i].id);
        if (!isValidID(s[i].id, s, i)) {
            printf("Invalid or Duplicate ID: %s\n", s[i].id);
            return 1;
        }

        fscanf(fp, "%s", s[i].name);
        if (!isValidName(s[i].name)) {
            printf("Invalid Name: %s\n", s[i].name);
            return 1;
        }

        for (int j = 0; j < SUBJECTS; j++) {
            fscanf(fp, "%d", &s[i].marks[j]);
            if (!isValidMarks(s[i].marks[j])) {
                printf("Invalid Marks for %s\n", s[i].name);
                return 1;
            }
        }

        calculateResult(&s[i]);
    }

    fclose(fp);

    report(s, n);
    Stats(s, n);

    return 0;
}
