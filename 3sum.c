#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter the three integers, separated by a comma: ");
    scanf("%d, %d, %d", &a, &b, &c);
    printf("The sum of %d, %d and %d is: %d\n", a, b, c, a + b + c);
    printf("The product of %d, %d and %d is: %d\n", a, b, c, a * b * c);
    printf("The difference of %d, %d and %d is: %d\n", a, b, c, a - b - c);
    printf("The quotient of %d, %d and %d is: %f\n", a, b, c, (float)a / b / c);
    return 0;
}
