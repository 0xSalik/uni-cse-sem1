#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two integers separated by a comma: ");
    scanf("%d, %d", &a, &b);
    printf("Logical Operators:\n");
    printf("(a > 0 && b > 0): %d\n", (a > 0 && b > 0));
    printf("(a > 0 || b < 0): %d\n", (a > 0 || b < 0));
    printf("!(a == b): %d\n\n", !(a == b));
    return 0;
}
