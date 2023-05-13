#include <stdio.h>

// Define the maximum number of students
#define MAX_STUDENTS 100

// Define a struct for storing student data
struct Student {
    char name[50];
    int rollNo;
    int marks;
    char grade;
};

// Define a function to calculate the grade based on marks
char calculateGrade(int marks) {
    if (marks >= 90) {
        return 'A';
    } else if (marks >= 80) {
        return 'B';
    } else if (marks >= 70) {
        return 'C';
    } else if (marks >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    // Declare an array to store student data
    struct Student students[MAX_STUDENTS];

    // Get the number of students from the user
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Loop through each student and get their data
    for (int i = 0; i < numStudents; i++) {
        printf("Enter the name of student %d: ", i+1);
        scanf("%s", students[i].name);
        printf("Enter the roll no. of student %d: ", i+1);
        scanf("%d", &students[i].rollNo);
        printf("Enter the marks of student %d: ", i+1);
        scanf("%d", &students[i].marks);

        // Calculate the grade based on marks
        students[i].grade = calculateGrade(students[i].marks);
    }

    // Print the student data
    printf("Name\tRoll No.\tMarks\tGrade\n");
    for (int i = 0; i < numStudents; i++) {
        printf("%s\t%d\t\t%d\t%c\n", students[i].name, students[i].rollNo, students[i].marks, students[i].grade);
    }

    return 0;
}
