/**
 * Problem Statement:
 * Write a program that takes two numbers (a, b) as inputs and computes the value
 * of the equation:
 * X = (3.31 * a^2 + 2.01 * b^3) / (7.16 * b^2 + 2.01 * a^3)
 * Note: Computed without using math.h library.
 *
 * Topic: Operator Precedence & Manual Exponentiation
 */

#include <stdio.h>

int main() {
    double a, b;

    // Reading inputs for a and b
    if (scanf("%lf %lf", &a, &b) != 2) {
        return 1;
    }

    // Manual calculation of powers without math.h
    double numerator = (3.31 * a * a) + (2.01 * b * b * b);
    double denominator = (7.16 * b * b) + (2.01 * a * a * a);

    double X = numerator / denominator;

    // Output with 6 decimal places accuracy
    printf("X = %.6lf\n", X);

    return 0;
}