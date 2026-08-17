#include <stdio.h>

int main() {
    // 1. Continue Example in While Loop
    int i = 0;
    while (i < 10) {
        if (i == 4) {
            i++; // Increment before continue to prevent infinite loop
            continue; // Skips printing 4 and proceeds to next iteration
        }
        printf("%d\n", i);
        i++;
    }

    return 0;
}
