#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    file = fopen("sample.txt", "r");
    if(file == NULL) {
        printf("Error: Could not open file for reading\n");
        return 1;
    }

    printf("Contents of file:\n");
    while((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }

    fclose(file);
    return 0;
}
