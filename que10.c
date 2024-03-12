/*Read at most 10 names of students and store them into an array of 
char nameOfStudents[10][50]. Sort the array and display them back. Hint: 
Use qsort() method.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 10
#define MAX_NAME_LENGTH 50

// Comparison function for qsort
int compareStrings(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    char nameOfStudents[MAX_STUDENTS][MAX_NAME_LENGTH];
    int numStudents = 0;

    // Read names of students
    printf("Enter names of students (maximum 10, type 'end' to stop):\n");
    while (numStudents < MAX_STUDENTS) {
        printf("Enter name %d: ", numStudents + 1);
        scanf("%s", nameOfStudents[numStudents]);
        if (strcmp(nameOfStudents[numStudents], "end") == 0) {
            break;
        }
        numStudents++;
    }

    // Sort the array of names
    qsort(nameOfStudents, numStudents, sizeof(nameOfStudents[0]), compareStrings);

    // Display the sorted names
    printf("\nSorted names of students:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("%s\n", nameOfStudents[i]);
    }

    return 0;
}


