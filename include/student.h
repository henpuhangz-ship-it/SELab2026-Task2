#ifndef STUDENT_H
#define STUDENT_H

#define MAX_STUDENTS 100
#define SUBJECTS 6

typedef struct {
    char id[20];
    char name[50];
    int marks[SUBJECTS];
    int total;
    float percentage;
    float cgpa;
    char grade[3];
} Student;

#endif
