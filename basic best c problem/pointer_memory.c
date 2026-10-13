/**
 * ============================================================================
 * BASIC BEST C PROBLEMS: Pointers and Dynamic Memory Allocation
 * ============================================================================
 * This file contains fundamental problems demonstrating pointers, address arithmetic,
 * and dynamic memory allocation (`malloc`, `free`, `calloc`).
 * ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/* ============================================================================
 * QUESTION 1: Dynamic Array Sum and Average
 * ----------------------------------------------------------------------------
 * Problem Statement:
 * Write a program that asks the user for the number of elements, dynamically
 * allocates memory using `malloc`, populates the array with values, calculates
 * the sum and average, and properly frees the allocated memory.
 *
 * Discussion / Questions to consider:
 * - Why is checking if `malloc` returns `NULL` crucial?
 * - What is the difference between memory leaks and dangling pointers?
 * ============================================================================ */

void calculate_dynamic_array_stats() {
    int n;
    printf("Enter number of elements for dynamic array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input size.\n");
        return;
    }

    // Dynamic memory allocation
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed! Out of memory.\n");
        return;
    }

    // Populate array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculate sum and average
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    double average = (double)sum / n;

    printf("\n--- Results ---\n");
    printf("Sum     : %lld\n", sum);
    printf("Average : %.2f\n", average);

    // Free allocated memory to prevent memory leaks
    free(arr);
    arr = NULL; // Avoid dangling pointer
}


/* ============================================================================
 * QUESTION 2: Swapping Two Numbers Using Pointers (Call by Reference)
 * ----------------------------------------------------------------------------
 * Problem Statement:
 * Write a function `swap` that takes two integer pointers and swaps their values.
 *
 * Discussion / Questions to consider:
 * - Why does passing by value fail to swap variables in the calling function?
 * - How do pointers allow functions to modify variables outside their scope?
 * ============================================================================ */

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main() {
    printf("=== Pointers and Dynamic Memory Demo ===\n\n");

    // Test Swap
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap : x = %d, y = %d\n\n", x, y);

    // Test Dynamic Array Stats
    calculate_dynamic_array_stats();

    return 0;
}
