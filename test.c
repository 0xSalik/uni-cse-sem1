#include <stdio.h>
int main() {
    int x = 10;
    int i = 10;
    int y = x++;
    printf("%d\n", y);
    int z = ++i;
    printf("%d, %d\n", y, z);
}
