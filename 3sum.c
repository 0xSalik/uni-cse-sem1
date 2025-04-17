#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter the three integers, separated by a comma: ");
    scanf("%d, %d, %d", &a, &b, &c);
    printf("The sum of %d, %d and %d is: %d\n", a, b, c, a + b + c);
    return 0;
}
