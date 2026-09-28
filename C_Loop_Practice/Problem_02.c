#include <stdio.h>

int main() {
    /*
    Problem 2:
    Write a program (WAP) that will print following series upto Nth terms.
    1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31 …….
    */

    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", 2 * i - 1);
    }

    return 0;
}
