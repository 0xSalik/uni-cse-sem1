#include <stdio.h>

void pattern1() {
    int i, j;
    for(i = 1; i <= 4; i++) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern2() {
    int i, j;
    for(i = 1; i <= 4; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

void pattern3() {
    int i, j;
    for(i = 2; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern4() {
    int i, j;
    for(i = 5; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern5() {
    int i, j, k;
    for(i = 1; i <= 4; i++) {
        for(k = 4-i; k > 0; k--)
            printf(" ");
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern6() {
    int i, j;
    for(i = 1; i <= 4; i++) {
        for(j = 1; j <= 7; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    printf("Pattern 1:\n");
    pattern1();
    printf("\nPattern 2:\n");
    pattern2();
    printf("\nPattern 3:\n");
    pattern3();
    printf("\nPattern 4:\n");
    pattern4();
    printf("\nPattern 5:\n");
    pattern5();
    printf("\nPattern 6:\n");
    pattern6();
    return 0;
}
