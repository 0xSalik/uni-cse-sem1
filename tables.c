#include <stdio.h>

int main() {
    int i, j;
    for(i = 2; i <= 10; i++) {
        for(j = 1; j <= 10; j++) {
            printf("%dx%d=%d ", i, j, i*j);
        }
        printf("\n");
    }
    return 0;
}
