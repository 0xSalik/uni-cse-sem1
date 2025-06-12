#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
    char grade;
};

int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i+1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("Grade: ");
        scanf(" %c", &students[i].grade);
    }

    printf("\n%-20s %-10s %-10s %-5s\n", "Name", "Roll No", "Marks", "Grade");
    printf("----------------------------------------------\n");
    for(i = 0; i < n; i++) {
        printf("%-20s %-10d %-10.2f %-5c\n",
               students[i].name, students[i].rollNo,
               students[i].marks, students[i].grade);
    }

    return 0;
}
