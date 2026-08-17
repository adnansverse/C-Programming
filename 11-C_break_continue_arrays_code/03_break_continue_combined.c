#include <stdio.h>

int main() {
    // 1. Combining Break and Continue with Arrays
    int myNumbers[] = {3, -1, 7, 0, 9};
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    int i;

    for (i = 0; i < length; i++) {
        if (myNumbers[i] < 0) {
            continue; // Skip negative numbers
        }
        if (myNumbers[i] == 0) {
            break; // Stop loop if zero is encountered
        }
        printf("%d\n", myNumbers[i]);
    }

    return 0;
}
