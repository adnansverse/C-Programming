#include <stdio.h>

int main() {
    /*
    Problem 3:
    Write a program (WAP) that will print following series upto Nth terms.
    1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, ……. 
    */

    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            printf("1 ");
        } else {
            printf("0 ");
        }
    }

    return 0;
}
