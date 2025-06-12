#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch;
    int characters = 0, words = 0, sentences = 0;
    int vowels = 0, consonants = 0, punctuation = 0;
    int inWord = 0;

    file = fopen("sample.txt", "r");
    if(file == NULL) {
        printf("Error: Could not open file\n");
        return 1;
    }

    while((ch = fgetc(file)) != EOF) {
        characters++;

        if(isalpha(ch)) {
            ch = tolower(ch);
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
            inWord = 1;
        } else if(isspace(ch)) {
            if(inWord) {
                words++;
                inWord = 0;
            }
        } else if(ch == '.' || ch == '!' || ch == '?') {
            sentences++;
            punctuation++;
            if(inWord) {
                words++;
                inWord = 0;
            }
        } else if(ispunct(ch)) {
            punctuation++;
        }
    }

    if(inWord) {
        words++;
    }

    fclose(file);

    printf("File Analysis:\n");
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Sentences: %d\n", sentences);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Punctuation marks: %d\n", punctuation);

    return 0;
}
