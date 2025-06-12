#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char *ptr;
    int len, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);
    ptr = str + len - 1;

    printf("Reversed string using pointers: ");
    for(i = 0; i < len; i++) {
        printf("%c", *ptr);
        ptr--;
    }
    printf("\n");
    return 0;
}
