#include <stdio.h>

int main() {
    /*
    Problem 4:
    Write a program (WAP) that will take N numbers as inputs and compute their average.
    (Restriction: Without using any array)
    */

    int n;
    float num, sum = 0, average;

    printf("Enter N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%f", &num);
        sum += num;
    }

    average = sum / n;

    printf("AVG of %d inputs: %.6f", n, average);

    return 0;
}
