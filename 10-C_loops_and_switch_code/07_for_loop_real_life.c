#include <stdio.h>

int main() {
    int i;

    // 1. Counting by Tens (0 to 100)
    printf("Counting by Tens:\n");
    for (i = 0; i <= 100; i += 10) {
        printf("%d\n", i);
    }

    // 2. Even Numbers
    printf("Even Numbers:\n");
    for (i = 0; i <= 10; i = i + 2) {
        printf("%d\n", i);
    }

    // 3. Odd Numbers
    printf("Odd Numbers:\n");
    for (i = 1; i < 10; i = i + 2) {
        printf("%d\n", i);
    }

    // 4. Powers of 2 (up to 512)
    printf("Powers of 2:\n");
    for (i = 2; i <= 512; i *= 2) {
        printf("%d\n", i);
    }

    // 5. Multiplication Table of 2
    printf("Multiplication Table of 2:\n");
    int number = 2;
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
