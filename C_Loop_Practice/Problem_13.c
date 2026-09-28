#include <stdio.h>

int main() {
    /*
    Problem 13:
    Write a program (WAP) that will print the factorial (N!) of a given number N.
    Please see the sample input output.
    */

    int n, fact = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial = %d", fact);

    return 0;
}
