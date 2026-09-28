#include <stdio.h>

int main() {
    /*
    Problem 16:
    WAP that will find the GCD (greatest common divisor) and LCM (least common multiple)
    of two positive integers.
    */

    int a, b, x, y, remainder, gcd, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (y != 0) {
        remainder = x % y;
        x = y;
        y = remainder;
    }

    gcd = x;
    lcm = (a * b) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d", lcm);

    return 0;
}
