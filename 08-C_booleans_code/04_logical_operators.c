#include <stdio.h>
#include <stdbool.h>

int main() {
    int age = 20;
    bool hasID = true;

    // AND operator (&&): Both conditions must be true
    printf("AND (age >= 18 && hasID): %d\n", age >= 18 && hasID); // Prints 1

    // OR operator (||): At least one condition must be true
    printf("OR (age >= 18 || hasID): %d\n", age >= 18 || hasID);   // Prints 1

    // NOT operator (!): Reverses the boolean value
    printf("NOT (!hasID): %d\n", !hasID);                       // Prints 0

    return 0;
}
