/*
 * Problem: Write a C program to compute the perimeter and area of a circle with a given radius.
 * Output: 
 *   Perimeter of the Circle = 37.680000 inches
 *   Area of the Circle = 113.040001 square inches
 */

#include <stdio.h>

int main() {
    // Variable Declaration
    float radius = 6.0;
    float pi = 3.14;
    float perimeter, area;

    // Calculations
    perimeter = 2 * pi * radius;
    area = pi * radius * radius;

    // Output
    printf("Perimeter of the Circle = %f inches\n", perimeter);
    printf("Area of the Circle = %f square inches\n", area);

    return 0;
}
