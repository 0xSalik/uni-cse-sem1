#include <stdio.h>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside function - a: %d, b: %d\n", a, b);
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swap - x: %d, y: %d\n", x, y);
    swapByValue(x, y);
    printf("After swap (call by value) - x: %d, y: %d\n", x, y);
    return 0;
}
