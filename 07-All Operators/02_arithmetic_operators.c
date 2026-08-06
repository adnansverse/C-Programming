// Chapter: C Arithmetic Operators

#include <stdio.h>

int main() {
    int x = 10;
    int y = 3;

    printf("Addition (10 + 3): %d\n", x + y);        // 13
    printf("Subtraction (10 - 3): %d\n", x - y);     // 7
    printf("Multiplication (10 * 3): %d\n", x * y);  // 30
    printf("Division (10 / 3): %d\n", x / y);        // 3
    printf("Modulus (10 %% 3): %d\n", x % y);        // 1

    // Increment and Decrement
    int z = 5;
    ++z;
    printf("Incremented z: %d\n", z); // 6
    --z;
    printf("Decremented z: %d\n", z); // 5

    // Floating-point division comparison
    double c = 10.0;
    double d = 3.0;
    printf("Decimal Division: %f\n", c / d); // 3.333333

    // Real-Life Example: Room Counter
    int peopleInRoom = 0;
    peopleInRoom++; // Person enters
    peopleInRoom++; // Person enters
    peopleInRoom++; // Person enters
    printf("People in room: %d\n", peopleInRoom); // 3

    peopleInRoom--; // Person leaves
    printf("People remaining: %d\n", peopleInRoom); // 2

    return 0;
}