#include <stdio.h>

int main() {
    /*
    Problem 18:
    WAP that will determine whether an integer is palindrome number or not.
    */

    int num, original, digit, reverse = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if (original == reverse) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
