#include <stdio.h>
#include <math.h>

int main() {
    double X;

    // Read floating point input
    scanf("%lf", &X);

    // Calculate C = absolute value of X
    double C = fabs(X);

    // Calculate A (rounded up) and B (rounded down) based on magnitude
    int A = (int)ceil(C);
    int B = (int)floor(C);

    // Print output in required format
    printf("A = %d, B = %d, C = %g\n", A, B, C);

    return 0;
}
