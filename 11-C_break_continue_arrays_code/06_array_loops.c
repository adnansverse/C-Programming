#include <stdio.h>

int main() {
    int myNumbers[] = {25, 50, 75, 100};
    int i;

    // Method 1: Fixed Size Loop (Not Recommended)
    printf("Fixed size loop:\n");
    for (i = 0; i < 4; i++) {
        printf("%d\n", myNumbers[i]);
    }

    // Method 2: Dynamic Dynamic/Flexible Loop using sizeof (Best Practice)
    printf("Dynamic size loop:\n");
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    for (i = 0; i < length; i++) {
        printf("%d\n", myNumbers[i]);
    }

    return 0;
}
