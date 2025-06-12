#include <stdio.h>

int main() {
    FILE *file;
    char text[1000];

    file = fopen("output.txt", "w");
    if(file == NULL) {
        printf("Error: Could not open file for writing\n");
        return 1;
    }

    printf("Enter text to write to file (max 999 characters):\n");
    fgets(text, sizeof(text), stdin);

    fprintf(file, "%s", text);

    fclose(file);
    printf("Text written to output.txt successfully\n");
    return 0;
}
