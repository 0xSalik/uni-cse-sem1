// Display all even numbers from 1 to 100 [using loop and if]
#include <stdio.h>
int main() {
    int i;
    printf("Even numbers from 1 to 100:\n");
    for (i = 1; i <= 100; i++) {
        if (!(i & 1)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
