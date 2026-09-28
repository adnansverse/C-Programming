#include <stdio.h>

int main() {
    /*
    Problem 5:
    Write a program (WAP) that will take two numbers X and Y as inputs. Then it will print
    the square of X and increment (if X<Y) or decrement (if X>Y) X by 1, until X reaches Y.
    If and when X is equal to Y, the program prints “Reached!”
    */

    int x, y;

    printf("Enter X and Y: ");
    scanf("%d %d", &x, &y);

    while (x != y) {
        printf("%d ", x * x);

        if (x < y) {
            x++;
        } else {
            x--;
        }
    }

    printf("Reached!");

    return 0;
}
