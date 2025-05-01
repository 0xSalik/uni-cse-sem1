#include <stdio.h>
int main() {
    int num;
    printf("Enter the number to check: ");
    scanf("%d", &num);
    printf("%d is %s ", num, num & 1 ? "Odd\n" : "Even\n");
    return 0;
}
