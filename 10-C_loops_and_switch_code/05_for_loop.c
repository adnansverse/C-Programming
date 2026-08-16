#include <stdio.h>

int main() {
    // 1. Basic For Loop (0 to 4)
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d\n", i);
    }

    // 2. Even Numbers (0 to 10)
    for (i = 0; i <= 10; i = i + 2) {
        printf("%d\n", i);
    }

    // 3. Sum of Numbers (1 to 5)
    int sum = 0;
    for (i = 1; i <= 5; i++) {
        sum = sum + i;
    }
    printf("Sum is %d\n", sum);

    // 4. Countdown (5 to 1)
    for (i = 5; i > 0; i--) {
        printf("%d\n", i);
    }

    return 0;
}
