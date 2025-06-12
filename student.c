#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
    char grade;
};

int main() {
    struct Student s;

    printf("Enter student details:\n");
    printf("Name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0';

    printf("Roll Number: ");
    scanf("%d", &s.rollNo);

    printf("Marks: ");
    scanf("%f", &s.marks);

    printf("Grade: ");
    scanf(" %c", &s.grade);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.rollNo);
    printf("Marks: %.2f\n", s.marks);
    printf("Grade: %c\n", s.grade);

    return 0;
}
