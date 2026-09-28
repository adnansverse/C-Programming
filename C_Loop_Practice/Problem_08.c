#include <stdio.h>

int main() {
    /*
    Problem 8:
    Write a program (WAP) that will reverse the digits of an input integer.
    */

    int num, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    printf("Reverse = %d", reverse);

    return 0;
}
