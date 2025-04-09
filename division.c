#include <stdio.h>
int main(){
    int x, y;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    if (y == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 1;
    }
    printf("The quotient of %d and %d is %f\n", x, y, ((double)x / (double)y));
    return 0;
}
