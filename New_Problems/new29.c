#include <stdio.h>

int main()
{
    int a;
    float b;
    double c;

    // Taking input
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%f", &b);

    printf("Enter c: ");
    scanf("%lf", &c);

    // 1. Calculate X
    double X = (3.31 * a * a + 2.01 * b * b * b)
             / (7.16 * b * b + 2.01 * a * a * a);

    // 2. Calculate Y
    double Y = a - b / 3 + 2 * c - 1;

    // 3. Calculate Z
    double z = ((double)(a + b) / 2) * c;

    // Print results with exactly 6 decimal places
    printf("\nX = %.6f\n", X);
    printf("Y = %.6f\n", Y);
    printf("z = %.6f\n", z);

    return 0;
}
