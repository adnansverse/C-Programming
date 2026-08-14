#include <stdio.h>
#include <stdbool.h>

int main() {
    // Comparing values using comparison operators
    printf("10 > 9: %d\n", 10 > 9);     // Returns 1 (true)
    printf("10 == 10: %d\n", 10 == 10); // Returns 1 (true)
    printf("10 == 15: %d\n", 10 == 15); // Returns 0 (false)
    printf("5 == 55: %d\n", 5 == 55);   // Returns 0 (false)

    // Comparing variables
    int x = 10;
    int y = 9;
    printf("x > y: %d\n", x > y);       // Returns 1 (true)

    // Comparing boolean variables
    bool isHamburgerTasty = true;
    bool isPizzaTasty = true;
    printf("Are both tasty? %d\n", isHamburgerTasty == isPizzaTasty); // Returns 1 (true)

    return 0;
}
