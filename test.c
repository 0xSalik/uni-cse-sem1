//Question: Write a C program to store the names, roll numbers, and marks of 50 students in 5 subjects. The program should then find and display the student with the highest total marks.


#include <stdio.h>
struct student {
    char name[50];
    int rollnumber;
    int marks[5];
    int totalmarks;
};

int main() {

    struct student S1[50];
    for (int i = 0; i < 50; i++){
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", S1[i].name);
        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &S1[i].rollnumber);
        S1[i].totalmarks = 0;
        for (int j = 0; j < 5; j++) {
            printf("Enter marks for subject %d: ", j + 1);
            scanf("%d", &S1[i].marks[j]);
            S1[i].totalmarks += S1[i].marks[j];
        }
    }
    int maxMarks = 0;
    int maxIndex = 0;
    for (int i = 0; i < 50; i++) {
        if (S1[i].totalmarks > maxMarks) {
            maxMarks = S1[i].totalmarks;
            maxIndex = i;
        }
    }
    printf("Student with highest total marks:\n");
    printf("Name: %s\n", S1[maxIndex].name);
    printf("Roll Number: %d\n", S1[maxIndex].rollnumber);
    printf("Total Marks: %d\n", S1[maxIndex].totalmarks);
        return 0;
}
