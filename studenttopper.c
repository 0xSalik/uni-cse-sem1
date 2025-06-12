#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    float marks;
};

int main() {
    int n, i, topperIndex = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for(i = 0; i < n; i++) {
        printf("Enter Roll Number for student %d: ", i+1);
        scanf("%d", &students[i].rollNo);
        printf("Enter Marks for student %d: ", i+1);
        scanf("%f", &students[i].marks);
    }

    for(i = 1; i < n; i++) {
        if(students[i].marks > students[topperIndex].marks) {
            topperIndex = i;
        }
    }

    printf("\nClass Details:\n");
    printf("%-10s %-10s\n", "Roll No", "Marks");
    printf("--------------------\n");
    for(i = 0; i < n; i++) {
        printf("%-10d %-10.2f\n", students[i].rollNo, students[i].marks);
    }

    printf("\nClass Topper:\n");
    printf("Roll Number: %d\n", students[topperIndex].rollNo);
    printf("Marks: %.2f\n", students[topperIndex].marks);

    return 0;
}
