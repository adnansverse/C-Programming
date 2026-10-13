/*
 * Problem 4: Armstrong Number Checker
 * -------------------------------------
 * Question:
 * Write a C program to check whether a given integer is an Armstrong number.
 * An Armstrong number (or narcissistic number) of n digits is an integer such
 * that the sum of its digits raised to the nth power equals the number itself.
 *
 * Example 1:
 *   Input: 153 (3 digits)
 *   Calculation: 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
 *   Output: 153 is an Armstrong number.
 *
 * Example 2:
 *   Input: 9474 (4 digits)
 *   Calculation: 9^4 + 4^4 + 7^4 + 4^4 = 6561 + 256 + 2401 + 256 = 9474
 *   Output: 9474 is an Armstrong number.
 *
 * Example 3:
 *   Input: 120
 *   Output: 120 is not an Armstrong number.
 */

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int count_digits(int n) {
    int count = 0;
    while (n != 0) {
        count++;
        n /= 10;
    }
    return count;
}

bool is_armstrong(int n) {
    if (n < 0) {
        return false;
    }

    int num_digits = count_digits(n);
    int original = n;
    long long sum = 0;

    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += (long long)round(pow(digit, num_digits));
        temp /= 10;
    }

    return sum == original;
}

int main(void) {
    int num;

    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Error: Please enter a non-negative integer.\n");
        return 1;
    }

    if (is_armstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
