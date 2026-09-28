#include <stdio.h>

int main() {
    /*
    Problem 7:
    Write a program (WAP) that will run and show keyboard inputs until the user types an 'A'
    at the keyboard.
    */

    char ch;

    for (;;) {
        scanf(" %c", &ch);
        printf("Input: %c\n", ch);

        if (ch == 'A') {
            break;
        }
    }

    return 0;
}
