#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two integers separated by a comma: ");
    scanf("%d, %d", &a, &b);
    printf("Increment/Decrement Operators:\n");
    printf("a++ = %d\n", a++);
    printf("Now a = %d\n", a);
    printf("++a = %d\n", ++a);
    printf("a-- = %d\n", a--);
    printf("Now a = %d\n", a);
    printf("--a = %d\n\n", --a);
    return 0;
}
