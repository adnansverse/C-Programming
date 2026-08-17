#include <stdio.h>

int main() {
    // 1. Break Example in While Loop
    int i = 0;
    while (i < 10) {
        if (i == 4) {
            break; // Loop terminates when i reaches 4
        }
        printf("%d\n", i);
        i++;
    }

    return 0;
}
