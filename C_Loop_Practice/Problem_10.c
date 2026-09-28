#include <stdio.h>

int main() {
    /*
    Problem 10:
    Write a program (WAP) that will give the sum of first Nth terms for the following series.
    1, -2, 3, -4, 5, -6, 7, -8, 9, -10, 11, -12, 13, -14, ……. 
    */

    int n, sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            sum += i;
        } else {
            sum -= i;
        }
    }

    printf("Result: %d", sum);

    return 0;
}
