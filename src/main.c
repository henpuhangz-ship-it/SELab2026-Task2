#include <stdio.h>
#include "student.h"
#include "validation.h"
#include "result.h"
#include "report.h"

int main() {
    FILE *fp;
    Student students[MAX_STUDENTS];
    int count = 0, n;

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: Unable to open input file.\n");
        return 1;
    }

    fscanf(fp, "%d", &n);

    if (n <= 0 || n > MAX_STUDENTS) {
        printf("Invalid number of students.\n");
        fclose(fp);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        Student temp;

        fscanf(fp, "%s %s", temp.id, temp.name);
        for (int j = 0; j < SUBJECTS; j++)
            fscanf(fp, "%d", &temp.marks[j]);

        if (!isValidID(temp.id, students, count)) continue;
        if (!isValidName(temp.name)) continue;
        if (!isValidMarks(temp.marks)) continue;

        computeResult(&temp);
        students[count++] = temp;
    }

    fclose(fp);

    Report(students, count);
    Statistics(students, count);

    return 0;
}
