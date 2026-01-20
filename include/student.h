#ifndef STUDENT_H
#define STUDENT_H

#define MAX 100
#define SUBJECTS 6


struct Students {
    char id[20];
    char name[50];
    int marks[SUBJECTS];
    int total;
    float percentage;
    char grade[3];
};

#endif
