#include <stdio.h>

int main() {
    int i;
    printf("Break demonstration:\n");
    for(i = 1; i <= 10; i++) {
        if(i == 5)
            break;
        printf("%d ", i);
    }
    printf("\n\nContinue demonstration:\n");
    for(i = 1; i <= 10; i++) {
        if(i == 5)
            continue;
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
