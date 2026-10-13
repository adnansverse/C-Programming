/**
 * ============================================================================
 * BASIC BEST C PROBLEMS: Factorial and Fibonacci
 * ============================================================================
 * This file contains classic fundamental C problems focusing on recursion,
 * iteration, time complexity, and stack memory usage.
 * ============================================================================
 */

#include <stdio.h>

/* ============================================================================
 * QUESTION 1: Factorial Calculation (Iterative vs. Recursive)
 * ----------------------------------------------------------------------------
 * Problem Statement:
 * Write two functions to compute the factorial of a non-negative integer n:
 *   1. Iterative approach (factorial_iterative)
 *   2. Recursive approach (factorial_recursive)
 *
 * Discussion / Questions to consider:
 * - What is the time and space complexity of each approach?
 * - At what value of n does standard 32-bit `int` or 64-bit `long long`
 *   overflow, and how can large numbers be handled?
 * ============================================================================ */

long long factorial_iterative(int n) {
    if (n < 0) return -1; // Error indicator for negative numbers
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

long long factorial_recursive(int n) {
    if (n < 0) return -1;
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial_recursive(n - 1);
}


/* ============================================================================
 * QUESTION 2: Fibonacci Series and Nth Term
 * ----------------------------------------------------------------------------
 * Problem Statement:
 * Write a function to find the Nth Fibonacci number and print the series up to N terms.
 *
 * Discussion / Questions to consider:
 * - Why is a naive recursive Fibonacci function inefficient (O(2^n))?
 * - How can you optimize it using iteration or memoization (Dynamic Programming)?
 * ============================================================================ */

void print_fibonacci_series(int n) {
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return;
    }

    long long t1 = 0, t2 = 1, next_term;

    printf("Fibonacci Series up to %d terms: ", n);
    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            printf("%lld ", t1);
            continue;
        }
        if (i == 2) {
            printf("%lld ", t2);
            continue;
        }
        next_term = t1 + t2;
        t1 = t2;
        t2 = next_term;
        printf("%lld ", next_term);
    }
    printf("\n");
}


int main() {
    printf("=== Factorial and Fibonacci Demo ===\n\n");

    // Test Factorial
    int n = 5;
    printf("Factorial of %d (Iterative): %lld\n", n, factorial_iterative(n));
    printf("Factorial of %d (Recursive): %lld\n", n, factorial_recursive(n));

    // Test Fibonacci
    int terms = 10;
    print_fibonacci_series(terms);

    return 0;
}
