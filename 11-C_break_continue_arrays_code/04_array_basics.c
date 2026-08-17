#include <stdio.h>

int main() {
    // 1. Array Declaration and Access
    int myNumbers[] = {25, 50, 75, 100};
    printf("First element: %d\n", myNumbers[0]); // Outputs 25

    // 2. Modifying Array Elements
    myNumbers[0] = 33;
    printf("Modified first element: %d\n", myNumbers[0]); // Outputs 33

    // 3. Fixed-size Array Declaration
    int fixedArray[4];
    fixedArray[0] = 25;
    fixedArray[1] = 50;
    fixedArray[2] = 75;
    fixedArray[3] = 100;

    return 0;
}
