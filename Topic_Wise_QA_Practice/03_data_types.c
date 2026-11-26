/*
Topic: 03 - Data Types
Topic-Wise Question & Solution - Day 03

Q1: Declare one variable of each basic data type (int, float, double, char),
    store a value in each, and print all the values with the correct format
    specifier.
Q2: Store a decimal number in a float variable and the same number in a
    double variable. Print both with many decimal places and notice which
    one keeps more precision.
Q3: Use sizeof to print the size (in bytes) of int, float, double, char,
    long and long long on your computer.

Solution (combined in one program, each answer marked):
*/

#include <stdio.h>

int main() {
    // Answer to Q1
    int age = 22;
    float cgpa = 3.75f;
    double pi = 3.141592653589793;
    char grade = 'A';

    printf("Age (int): %d\n", age);
    printf("CGPA (float): %.2f\n", cgpa);
    printf("Pi (double): %.15f\n", pi);
    printf("Grade (char): %c\n", grade);

    // Answer to Q2
    float price_float = 19.99f;
    double price_double = 19.99;

    printf("Float value:  %.10f\n", price_float);
    printf("Double value: %.10f\n", price_double);

    // Answer to Q3
    printf("Size of int:       %zu bytes\n", sizeof(int));
    printf("Size of float:     %zu bytes\n", sizeof(float));
    printf("Size of double:    %zu bytes\n", sizeof(double));
    printf("Size of char:      %zu bytes\n", sizeof(char));
    printf("Size of long:      %zu bytes\n", sizeof(long));
    printf("Size of long long: %zu bytes\n", sizeof(long long));

    return 0;
}
