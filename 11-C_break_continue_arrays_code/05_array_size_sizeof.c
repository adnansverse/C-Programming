#include <stdio.h>

int main() {
    // 1. Using sizeof operator to get total bytes
    int myNumbers[] = {10, 25, 50, 75, 100};
    printf("Total bytes: %zu\n", sizeof(myNumbers)); // Outputs 20 (5 * 4 bytes)

    // 2. Calculating Array Length (Number of elements)
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    printf("Array length: %d\n", length); // Outputs 5

    // 3. Length formula with double array
    double myValues[] = {1.1, 2.2, 3.3};
    int doubleLength = sizeof(myValues) / sizeof(myValues[0]);
    printf("Double Array length: %d\n", doubleLength); // Outputs 3

    return 0;
}
