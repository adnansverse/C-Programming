#include <stdio.h>

int main() {
    /*
    Problem 17:
    WAP that will determine whether a number is prime or not.
    */

    int n, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }

    return 0;
}
