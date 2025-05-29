// Check whether a string is palindrome or not.
#include <stdio.h>
#define MAX_SIZE 100
int main() {
    char str[MAX_SIZE];
    int length = 0, is_palindrome = 1;
    printf("Enter a string (max %d characters): ", MAX_SIZE - 1);
    fgets(str, sizeof(str), stdin);
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
