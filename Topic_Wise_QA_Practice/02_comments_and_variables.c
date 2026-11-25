/*
Topic: 02 - Comments & Variables
Topic-Wise Question & Solution - Day 02

Q1: Write a C program that uses a single-line comment and a multi-line
    comment, then prints your name on the screen.
Q2: Declare an int variable for your age, a float variable for your height
    in metres, and a char variable for your grade. Print all three values.
Q3: Store two integer values in variables, swap their values using a third
    (temporary) variable, and print the values before and after swapping.

Solution (combined in one program, each answer marked):
*/

#include <stdio.h>

int main() {
    // Answer to Q1
    // This is a single-line comment
    /* This is a multi-line comment.
       It can span more than one line. */
    printf("Name: Adnan Salim\n");

    // Answer to Q2
    int age = 22;
    float height = 1.72f;
    char grade = 'A';

    printf("Age: %d years\n", age);
    printf("Height: %.2f metres\n", height);
    printf("Grade: %c\n", grade);

    // Answer to Q3
    int a = 10, b = 20, temp;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
