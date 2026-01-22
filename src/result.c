#include <string.h>
#include "result.h"

void computeResult(Student *s) {
    s->total = 0;
    int pass = 1;

    for (int i = 0; i < SUBJECTS; i++) {
        s->total += s->marks[i];
        if (s->marks[i] < 50)
            pass = 0;
    }

    s->percentage = (s->total * 100.0) / (SUBJECTS * 100);
    s->cgpa = s->percentage / 10.0;

    if (!pass)
        strcpy(s->grade, "F");
    else
        assignGrade(s);
}

void assignGrade(Student *s) {
    float p = s->percentage;

    if (p >= 90) strcpy(s->grade, "O");
    else if (p >= 85) strcpy(s->grade, "A+");
    else if (p >= 75) strcpy(s->grade, "A");
    else if (p >= 65) strcpy(s->grade, "B+");
    else if (p >= 60) strcpy(s->grade, "B");
    else if (p >= 55) strcpy(s->grade, "C");
    else if (p >= 50) strcpy(s->grade, "D");
    else strcpy(s->grade, "F");
}
