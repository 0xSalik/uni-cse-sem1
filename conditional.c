#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two integers separated by a comma: ");
    scanf("%d, %d", &a, &b);
    printf("Conditional Operator:\n");
    int max = (a > b) ? a : b;
    printf("Max of a and b: %d\n\n", max);
    printf("sizeof Operator:\n");
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of char: %lu bytes\n\n", sizeof(char));
    return 0;
}
