/*
 * Problem 2: Fibonacci Series Generator
 * ---------------------------------------
 * Question:
 * Write a C program to print the first N terms of the Fibonacci sequence.
 * The Fibonacci sequence is a series of numbers where each number is the sum
 * of the two preceding ones, starting from 0 and 1:
 * 0, 1, 1, 2, 3, 5, 8, 13, 21, ...
 *
 * Example 1:
 *   Input: 5
 *   Output: Fibonacci Series (5 terms): 0 1 1 2 3
 *
 * Example 2:
 *   Input: 1
 *   Output: Fibonacci Series (1 terms): 0
 */

#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>

void print_fibonacci(int n) {
    if (n <= 0) {
        printf("Number of terms must be greater than 0.\n");
        return;
    }

    long long first = 0, second = 1;

    printf("Fibonacci Series (%d terms): ", n);
    for (int i = 1; i <= n; i++) {
        printf("%lld", first);
        if (i < n) {
            printf(" ");
        }

        long long next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}

int main(void) {
    int terms;

    printf("Enter number of terms (N): ");
    if (scanf("%d", &terms) != 1 || terms <= 0) {
        printf("Error: Please enter a positive integer greater than 0.\n");
        return 1;
    }

    print_fibonacci(terms);

    return 0;
}
