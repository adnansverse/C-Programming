// Chapter: C Logical Operators

#include <stdio.h>

int main() {
    int a = 6;

    // Logical AND (&&)
    printf("a > 3 && a < 10: %d\n", a > 3 && a < 10); // 1

    // Logical OR (||)
    printf("a < 5 || a < 4: %d\n", a < 5 || a < 4); // 0

    // Logical NOT (!)
    printf("!(a > 3 && a < 10): %d\n", !(a > 3 && a < 10)); // 0

    // Real-Life Example: Login Status Check
    int isLoggedIn = 1;
    int isAdmin = 0;

    printf("Regular user: %d\n", isLoggedIn && !isAdmin); // 1
    printf("Has access: %d\n", isLoggedIn || isAdmin);    // 1
    printf("Not logged in: %d\n", !isLoggedIn);           // 0

    return 0;
}