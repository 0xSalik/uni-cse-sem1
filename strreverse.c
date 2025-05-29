// Input a string from the user and display it in reverse order.
#include <stdio.h>
#define MAX_SIZE 100
int main() {
    char str[MAX_SIZE];
    int length = 0;

    printf("Enter a string (max %d characters): ", MAX_SIZE - 1);
    fgets(str, sizeof(str), stdin);
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    printf("The string in reverse order is: ");
    for (int i = length - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}
