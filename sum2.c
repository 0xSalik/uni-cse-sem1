// Find sum of series: 1 2 3 4 5 .... n
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of first %d numbers is %d\n", n, n * (n + 1) / 2);
    return 0;
}
