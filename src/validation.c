#include <string.h>
#include <ctype.h>
#include "validation.h"

int isValidID(char id[], Student students[], int count) {
    for (int i = 0; id[i] != '\0'; i++) {
        if (!isalnum(id[i]))
            return 0;
    }

    for (int j = 0; j < count; j++) {
        if (strcmp(id, students[j].id) == 0)
            return 0;
    }
    return 1;
}

int isValidName(char name[]) {
    for (int i = 0; name[i] != '\0'; i++) {
        if (!isalpha(name[i]) && name[i] != ' ')
            return 0;
    }
    return 1;
}

int isValidMarks(int marks[]) {
    for (int i = 0; i < SUBJECTS; i++) {
        if (marks[i] < 0 || marks[i] > 100)
            return 0;
    }
    return 1;
}
