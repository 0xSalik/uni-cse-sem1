#include <stdio.h>

int main() {
    int n, i;
    long long term = 2;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%lld ", term);
        term *= 2;
    }
    printf("\n");
    return 0;
}
