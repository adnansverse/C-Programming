#include <stdio.h>

int main() {
    int x, y;

    // Reading inputs x and y
    scanf("%d %d", &x, &y);

    // Using conditional operator to find maximum value
    int max = (x > y) ? x : y;

    // Printing output
    printf("Max: %d\n", max);

    return 0;
}
