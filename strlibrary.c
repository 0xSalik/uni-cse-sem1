// Demonstrate the use of string library functions: strlen(), strcpy(), strrev(), strcat(), strcmp() etc. using examples
#include <stdio.h>
#include <string.h>
char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}
#define MAX_SIZE 100
int main() {
    char str1[MAX_SIZE], str2[MAX_SIZE], str3[MAX_SIZE];
    int length;

    printf("Enter first string (max %d characters): ", MAX_SIZE - 1);
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string (max %d characters): ", MAX_SIZE - 1);
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    length = strlen(str1);
    printf("Length of first string: %d\n", length);

    length = strlen(str2);
    printf("Length of second string: %d\n", length);

    strcpy(str3, str1);
    printf("Copied first string to third string: %s\n", str3);

    strcat(str3, " ");
    strcat(str3, str2);
    printf("Concatenated strings: %s\n", str3);

    int cmp_result = strcmp(str1, str2);
    if (cmp_result == 0) {
        printf("Both strings are equal.\n");
    } else if (cmp_result < 0) {
        printf("First string is less than second string.\n");
    } else {
        printf("First string is greater than second string.\n");
    }
    strrev(str1);
    printf("Reversed first string: %s\n", str1);

    return 0;
}
