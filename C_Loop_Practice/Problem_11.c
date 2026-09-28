#include <stdio.h>

int main() {
    /*
    Problem 11:
    Write a program (WAP) that will calculate the result for the first Nth terms of the
    following series. [In that series sum, dot sign (.) means multiplication]
    1^2.2 + 2^2.3 + 3^2.4 + 4^2.5 + ……. 
    */

    int n;
    long long sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (long long)i * i * (i + 1);
    }

    printf("Result: %lld", sum);

    return 0;
}
