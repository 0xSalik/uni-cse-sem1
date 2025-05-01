#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c;
    printf("Enter the coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    int discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        printf("The roots are complex and different..\n");
    } else if (discriminant == 0) {
        printf("The roots are the same and equal to: %f\n", (float)-b/(2*(float)a));
    } else {
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are real and different: %f and %f\n", root1, root2);
    }

    return 0;
}
