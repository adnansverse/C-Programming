/*
 * Problem 3: Factorial of a Number
 * ----------------------------------
 * Question:
 * Write a C program to calculate the factorial of a given non-negative integer.
 * The factorial of a non-negative integer n, denoted by n!, is the product of
 * all positive integers less than or equal to n.
 * By definition: 0! = 1
 *
 * Example 1:
 *   Input: 5
 *   Output: Factorial of 5 = 120 (5 * 4 * 3 * 2 * 1)
 *
 * Example 2:
 *   Input: 0
 *   Output: Factorial of 0 = 1
 */

#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>

unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main(void) {
    int num;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Error: Input must be a non-negative integer (0 or greater).\n");
        return 1;
    }

    // Handled up to 20 without 64-bit integer overflow
    if (num > 20) {
        printf("Note: Factorials above 20 overflow a 64-bit unsigned integer.\n");
    }

    unsigned long long result = factorial(num);
    printf("Factorial of %d = %llu\n", num, result);

    return 0;
}
