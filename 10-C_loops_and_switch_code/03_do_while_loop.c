#include <stdio.h>

int main() {
    // 1. Standard Do/While Loop
    int i = 0;
    do {
        printf("%d\n", i);
        i++;
    } while (i < 5);

    // 2. Do/While with initial false condition (Runs at least once)
    int j = 10;
    do {
        printf("i is %d\n", j);
        j++;
    } while (j < 5);

    return 0;
}
