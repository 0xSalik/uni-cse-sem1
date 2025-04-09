#include <stdio.h>
int main() {
    int x, y;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    printf("The sum of %d and %d is %d\n", x, y, x+y);
    return 0;
}
