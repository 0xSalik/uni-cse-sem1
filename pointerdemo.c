#include <stdio.h>

int main() {
    int *ptr, num = 42;
    int arr[5] = {10, 20, 30, 40, 50};

    ptr = &num;
    printf("Pointer demonstration:\n");
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr: %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);

    printf("\nPointer arithmetic with array:\n");
    ptr = arr;
    for(int i = 0; i < 5; i++) {
        printf("arr[%d] = %d, address = %p\n", i, *(ptr + i), (ptr + i));
    }

    return 0;
}
