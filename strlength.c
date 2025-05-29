// Input a string from the user and find its length (without using the string library).
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

    printf("The length of the entered string is: %d\n", length);

    return 0;
}
