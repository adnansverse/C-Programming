// Chapter: C Assignment Operators

#include <stdio.h>

int main() {
    int x = 10;
    x += 5; // Same as x = x + 5
    printf("x after += 5: %d\n", x); // 15

    x -= 3;
    printf("x after -= 3: %d\n", x); // 12

    x *= 2;
    printf("x after *= 2: %d\n", x); // 24

    x /= 4;
    printf("x after /= 4: %d\n", x); // 6

    x %= 4;
    printf("x after %%= 4: %d\n", x); // 2

    // Real-Life Example: Tracking Savings
    int savings = 100;
    savings += 50; // Add 50
    printf("Total savings: %d\n", savings); // 150

    return 0;
}