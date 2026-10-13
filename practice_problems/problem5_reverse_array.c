/*
 * Problem 5: Reverse an Array
 * ----------------------------
 * Question:
 * Write a C program to reverse an array of integers in-place.
 * The program should prompt the user for the number of elements, take the
 * array elements as input, reverse them without using an auxiliary array,
 * and print the reversed array.
 *
 * Example:
 *   Input size: 5
 *   Input elements: 10 20 30 40 50
 *   Output: Reversed array: 50 40 30 20 10
 */

#include <stdio.h>

void reverse_array(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements at start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void print_array(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    int size;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("Error: Invalid array size.\n");
        return 1;
    }

    int arr[size];
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Error: Invalid input encountered.\n");
            return 1;
        }
    }

    printf("\nOriginal array: ");
    print_array(arr, size);

    reverse_array(arr, size);

    printf("Reversed array: ");
    print_array(arr, size);

    return 0;
}
