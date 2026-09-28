#include <stdio.h>

int main() {
    /*
    Problem 15:
    Write a program (WAP) that will find x^y (x to the power y)
    where x, y are positive integers.
    */

    int x, y;
    long long result = 1;

    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    for (int i = 1; i <= y; i++) {
        result *= x;
    }

    printf("%lld", result);

    return 0;
}
