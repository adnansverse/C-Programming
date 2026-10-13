/**
 * ============================================================================
 * BASIC BEST C PROBLEMS: Sorting and Searching Algorithms
 * ============================================================================
 * This file covers foundational sorting (Bubble Sort) and searching (Binary Search)
 * algorithms in C.
 * ============================================================================
 */

#include <stdio.h>
#include <stdbool.h>

/* ============================================================================
 * QUESTION 1: Bubble Sort
 * ----------------------------------------------------------------------------
 * Problem Statement:
 * Write a function to sort an array of integers in ascending order using Bubble Sort.
 * Include an optimization flag (`swapped`) to terminate early if the array is already sorted.
 *
 * Discussion / Questions to consider:
 * - What is the worst-case and best-case time complexity of Bubble Sort?
 * - Why is the optimized version faster on nearly sorted arrays?
 * ============================================================================ */

void bubble_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        // If no two elements were swapped in the inner loop, the array is sorted
        if (!swapped) {
            break;
        }
    }
}


/* ============================================================================
 * QUESTION 2: Binary Search
 * ----------------------------------------------------------------------------
 * Problem Statement:
 * Write a function to search for a target value in a sorted array using Binary Search.
 * Return the index of the target if found, or -1 if not found.
 *
 * Discussion / Questions to consider:
 * - What is the prerequisite for Binary Search to work?
 * - How does Binary Search achieve O(log n) time complexity?
 * ============================================================================ */

int binary_search(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        // Prevent potential integer overflow with: left + (right - left) / 2
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Target not found
}


void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main() {
    printf("=== Sorting and Searching Demo ===\n\n");

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    print_array(arr, size);

    bubble_sort(arr, size);

    printf("Sorted Array (Ascending): ");
    print_array(arr, size);

    int target = 22;
    int result = binary_search(arr, size, target);
    if (result != -1) {
        printf("Target %d found at index %d.\n", target, result);
    } else {
        printf("Target %d not found in array.\n", target);
    }

    return 0;
}
