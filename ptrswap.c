#include <stdio.h>

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swap - x: %d, y: %d\n", x, y);
    swapByReference(&x, &y);
    printf("After swap (call by reference) - x: %d, y: %d\n", x, y);
    return 0;
}
