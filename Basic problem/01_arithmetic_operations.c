/**
 * Problem Statement:
 * Write a program that takes two numbers X and Y as inputs, then calculates
 * and prints the values of their addition, subtraction, multiplication, 
 * division (quotient), and remainder.
 *
 * Topic: Basic Operators, Type Casting & Modulus Sign Rules
 */

#include <stdio.h>

int main() {
    double X, Y;

    // Reading inputs for X and Y
    if (scanf("%lf %lf", &X, &Y) != 2) {
        return 1;
    }

    // Calculating basic operations
    double addition = X + Y;
    double subtraction = X - Y;
    double multiplication = X * Y;

    // Typecasting to integer for integer division (quotient) and remainder
    int quotient = (int)X / (int)Y;
    int remainder = (int)X % (int)Y;

    // Printing output
    printf("Addition: %g\n", addition);
    printf("Subtraction: %g\n", subtraction);
    printf("Multiplication: %g\n", multiplication);
    printf("Quotient : %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}