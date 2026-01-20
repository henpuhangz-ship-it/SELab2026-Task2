#include <string.h>
#include "result.h"

void calculateResult(struct Students *s) {
    s->total = 0;
    for (int i = 0; i < SUBJECTS; i++)
        s->total += s->marks[i];

    s->percentage = s->total / 5.0;
    assignGrade(s);
}


void assignGrade(struct Students *s) {
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