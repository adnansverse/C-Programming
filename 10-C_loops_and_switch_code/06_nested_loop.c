#include <stdio.h>

int main() {
    // 1. Basic Nested Loop
    int i, j;
    // Outer loop
    for (i = 1; i <= 2; ++i) {
        printf("Outer: %d\n", i); // runs 2 times
        // Inner loop
        for (j = 1; j <= 3; ++j) {
            printf("  Inner: %d\n", j); // runs 6 times (2 * 3)
        }
    }

    // 2. Multiplication Table (1 to 3)
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }

    return 0;
}
