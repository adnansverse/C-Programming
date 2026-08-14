#include <stdio.h>
#include <stdbool.h>

int main() {
    // In C, 0 is false, and non-zero values are true
    if (5) {
        printf("This will print, because 5 is non-zero (true)\n");
    }

    if (0) {
        printf("This will NOT print, because 0 is false\n");
    }

    return 0;
}
