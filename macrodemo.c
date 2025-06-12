#include <stdio.h>

#define PI 3.14159
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define AREA_CIRCLE(r) (PI * SQUARE(r))

int main() {
    int x = 5, y = 8;
    float radius = 3.5;

    printf("PI = %f\n", PI);
    printf("Square of %d = %d\n", x, SQUARE(x));
    printf("Maximum of %d and %d = %d\n", x, y, MAX(x, y));
    printf("Minimum of %d and %d = %d\n", x, y, MIN(x, y));
    printf("Area of circle with radius %.2f = %.2f\n", radius, AREA_CIRCLE(radius));

    return 0;
}
