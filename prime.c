// Check whether a number is prime or not
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int is_prime = 1;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            is_prime = 0;
    if (is_prime && n > 1)
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);
    return 0;
}
