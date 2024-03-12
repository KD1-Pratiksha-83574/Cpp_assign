/* Write a program to read the name of a student (studentName), roll 
Number (rollNo) and marks (totalMarks) obtained. rollNo may be an 
alphanumeric string. Display the data as read. Hint: Create a Student 
structure and write appropriate functions.*/

#include <stdio.h>

// Define the structure for Student
struct Student {
    char studentName[50];
    char rollNo[20];
    int totalMarks;
};

// Function to read student data
void readStudentData(struct Student *s) {
    printf("Enter student name: ");
    scanf("%s", s->studentName);
    
    printf("Enter roll number: ");
    scanf("%s", s->rollNo);
    
    printf("Enter total marks obtained: ");
    scanf("%d", &s->totalMarks);
}

// Function to display student data
void displayStudentData(struct Student s) {
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.studentName);
    printf("Roll Number: %s\n", s.rollNo);
    printf("Total Marks Obtained: %d\n", s.totalMarks);
}

int main() {
    struct Student student;

    // Read student data
    readStudentData(&student);

    // Display student data
    displayStudentData(student);

    return 0;
}
