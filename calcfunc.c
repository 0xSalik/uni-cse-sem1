#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtractAB(int a, int b) {
    return a - b;
}

int subtractBA(int a, int b) {
    return b - a;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("%d + %d = %d\n", x, y, add(x, y));
    printf("%d - %d = %d\n", x, y, subtractAB(x, y));
    printf("%d - %d = %d\n", y, x, subtractBA(x, y));
    return 0;
}
