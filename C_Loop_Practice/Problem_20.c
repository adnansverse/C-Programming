#include <stdio.h>

int main() {
    /*
    Problem 20:
    Write a program that takes an integer number n as input and find out the sum of the
    following series up to n terms.
    1 + 12 + 123 + 1234 + ……..
    */

    int n;
    long long term = 0, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        term = term * 10 + i;
        sum += term;
    }

    printf("%lld", sum);

    return 0;
}
