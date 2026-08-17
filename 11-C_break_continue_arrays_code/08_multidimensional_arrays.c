#include <stdio.h>

int main() {
    // 1. 2D Array Declaration and Access
    int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
    printf("Element at row 0, col 2: %d\n", matrix[0][2]); // Outputs 2

    // 2. Modifying 2D Array Element
    matrix[0][0] = 9;
    printf("Updated element at row 0, col 0: %d\n", matrix[0][0]); // Outputs 9

    // 3. Traversing 2D Array using Nested Loops
    int i, j;
    printf("Traversing 2D Array:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\n", matrix[i][j]);
        }
    }

    // 4. 3D Array Declaration
    int example[2][4][3]; // 2 blocks, 4 rows, 3 columns

    return 0;
}
