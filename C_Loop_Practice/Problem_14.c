#include <stdio.h>

long long factorial(int n) {
    long long fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    /*
    Problem 14:
    Write a program (WAP) that will find nCr where n >= r; n and r are integers.
    */

    int n, r;
    long long result;

    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);

    result = factorial(n) / (factorial(r) * factorial(n - r));

    printf("%lld", result);

    return 0;
}
