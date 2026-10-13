/**
 * ============================================================================
 * BASIC BEST C PROBLEMS: Array Operations
 * ============================================================================
 * This file contains fundamental array problems: finding the second largest
 * element in a single pass and rotating an array.
 * ============================================================================
 */

#include <stdio.h>
#include <limits.h>

/* ============================================================================
 * QUESTION 1: Second Largest Element in an Array
 * ----------------------------------------------------------------------------
 * Problem Statement:
 * Given an array of integers, write a function to find the second largest
 * element without sorting the array. Can you do it in O(n) time complexity
 * and O(1) auxiliary space?
 *
 * Discussion / Questions to consider:
 * - How do you handle edge cases such as arrays with fewer than 2 elements
 *   or arrays where all elements are identical?
 * ============================================================================ */

int find_second_largest(int arr[], int size) {
    if (size < 2) {
        printf("Error: Array must have at least two elements.\n");
        return INT_MIN;
    }

    int first = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        printf("No distinct second largest element found.\n");
        return INT_MIN;
    }

    return second;
}


/* ============================================================================
 * QUESTION 2: Array Left Rotation by k positions
 * ----------------------------------------------------------------------------
 * Problem Statement:
 * Given an array of size n, rotate the elements of the array to the left
 * by k positions.
 *
 * Discussion / Questions to consider:
 * - What is the naive approach's time complexity if you shift one by one k times?
 * - How can the reversal algorithm optimize this to O(n) time and O(1) space?
 * ============================================================================ */

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void rotate_left_naive(int arr[], int size, int k) {
    k = k % size; // Handle cases where k > size
    for (int i = 0; i < k; i++) {
        int temp = arr[0];
        for (int j = 0; j < size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = temp;
    }
}


int main() {
    printf("=== Array Operations Demo ===\n\n");

    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    print_array(arr, size);

    int sec_large = find_second_largest(arr, size);
    if (sec_large != INT_MIN) {
        printf("Second Largest Element: %d\n", sec_large);
    }

    // Rotate left by 2
    int k = 2;
    rotate_left_naive(arr, size, k);
    printf("Array after left rotation by %d: ", k);
    print_array(arr, size);

    return 0;
}
