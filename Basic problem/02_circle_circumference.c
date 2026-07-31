/**
 * Problem Statement:
 * Write a program that calculates the circumference of a circle given its radius 'r'.
 * Equation: Area/Circumference, A = 2 * Pi * r
 *
 * Topic: Mathematical Formulas & Precision
 */

#include <stdio.h>

#define PI 3.14

int main() {
    double radius;

    // Reading radius input
    if (scanf("%lf", &radius) != 1) {
        return 1;
    }

    // Calculating circumference
    double circumference = 2 * PI * radius;

    // Output formatted with %g to omit unnecessary trailing zeros
    printf("Area: %g\n", circumference);

    return 0;
}