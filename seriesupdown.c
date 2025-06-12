#include <stdio.h>

int main() {
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Series 1 to %d: ", n);
    for(i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("Series %d to 1: ", n);
    for(i = n; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
