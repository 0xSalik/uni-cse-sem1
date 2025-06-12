#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += 1.0/(2*i-1);
    }
    printf("Sum of series up to 1/%d is: %f\n", n, sum);
    return 0;
}
