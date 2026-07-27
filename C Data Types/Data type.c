/* 
 * C Programming Basics: Variables, Data Types & Format Specifiers
 * Consolidated and corrected code covering Type-01, Type-02, and Type-03.
 */

#include <stdio.h>

int main() {
    // ==========================================
    // Type-01: Standard Integer Printing
    // ==========================================
    printf("--- Type-01: Basic Integers ---\n");
    int num = 10;
    int num1 = 30;

    printf("Number is %d\n", num);
    printf("And the second number is %d\n\n", num1);


    // ==========================================
    // Type-02: Printing Multiple Integers
    // ==========================================
    printf("--- Type-02: Multiple Variables ---\n");
    int num2 = 20, num3 = 30;

    // Corrected: Passed variables as arguments after format specifiers
    printf("Numbers are %d, %d\n\n", num2, num3);


    // ==========================================
    // Type-03: float, double, and char Types
    // ==========================================
    printf("--- Type-03: Float, Double & Char ---\n");
    float f_num = 10.5f;
    double d_num = 10.52552323222;
    char ch = 'a';

    // Standard float printing (default 6 decimal places)
    printf("Float value: %f\n", f_num);

    // Float printed with exactly 1 decimal place (%.1f)
    printf("Float (1 decimal place): %.1f\n", f_num);

    // Double printing using %lf
    printf("Double value: %lf\n", d_num);

    // Double printed with 2 decimal places (%.2lf)
    printf("Double (2 decimal places): %.2lf\n", d_num);

    // Character printing using %c
    printf("Character value: %c\n", ch);

    return 0;
}