#include <stdio.h>

int main() {
    /*
    Problem 19:
    WAP that will calculate following mathematical function for the input of x.
    Use only the series to solve the problem.

    Sin x = x - x^3/3! + x^5/5! - x^7/7! + ............
    */

    double x, term, sum;

    printf("Enter x: ");
    scanf("%lf", &x);

    term = x;
    sum = term;

    for (int i = 1; i <= 20; i++) {
        term = -term * x * x / ((2 * i) * (2 * i + 1));
        sum += term;
    }

    printf("%.3f", sum);

    return 0;
}
