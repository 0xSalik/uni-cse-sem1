// Find product of series: 1 2 3 4 5 .... n
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int product = 1;
    for (int i = 1; i <= n; i++)
        product *= i;
    printf("Product of first %d numbers is %d\n", n, product);
    return 0;
}
