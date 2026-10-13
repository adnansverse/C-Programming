/*
 * Problem 1: Palindrome Number Checker
 * --------------------------------------
 * Question:
 * Write a C program to check whether a given integer is a palindrome or not.
 * A palindrome number is a number that remains the same when its digits are reversed.
 *
 * Example 1:
 *   Input: 121
 *   Output: 121 is a palindrome number.
 *
 * Example 2:
 *   Input: 123
 *   Output: 123 is not a palindrome number.
 *
 * Example 3:
 *   Input: -121
 *   Output: -121 is not a palindrome number. (Negative numbers are not palindromes)
 */

#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(int n) {
    // Negative numbers are not palindromes
    if (n < 0) {
        return false;
    }

    int original = n;
    long long reversed = 0;

    while (n > 0) {
        int remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    return original == reversed;
}

int main(void) {
    int num;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Error: Invalid input.\n");
        return 1;
    }

    if (is_palindrome(num)) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }

    return 0;
}
