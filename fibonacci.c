#include <stdio.h>

int main() {
    int n, i;
    long long t1 = 0, t2 = 1, nextTerm;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("%lld %lld ", t1, t2);
    for(i = 3; i <= n; i++) {
        nextTerm = t1 + t2;
        printf("%lld ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
    return 0;
}
