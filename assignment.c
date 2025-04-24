#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter two integers separated by a comma: ");
    scanf("%d, %d", &a, &b);
    printf("Assignment Operators:\n");
    c = a;
    c += b;
    printf("c += b: %d\n", c);
    c -= b;
    printf("c -= b: %d\n", c);
    c *= b;
    printf("c *= b: %d\n", c);
    c /= b;
    printf("c /= b: %d\n", c);
    c %= b;
    printf("c %%= b: %d\n\n", c);
    return 0;
}
