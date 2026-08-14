#include <stdio.h>
#include <stdbool.h>

int main() {
    int a = 200;
    int b = 33;
    int c = 500;

    // AND (&&)
    if (a > b && c > a) {
        printf("AND: Both conditions are true\n");
    }

    // OR (||)
    if (a > b || a > c) {
        printf("OR: At least one condition is true\n");
    }

    // NOT (!)
    if (!(a > b)) {
        printf("NOT: a is NOT greater than b\n");
    } else {
        printf("NOT: Condition inside is true, but ! flips it to false\n");
    }

    // Real-life Access Control
    bool isLoggedIn = true;
    bool isAdmin = false;
    int securityLevel = 3;

    if (isLoggedIn && (isAdmin || securityLevel <= 2)) {
        printf("Access granted\n");
    } else {
        printf("Access denied\n");
    }

    return 0;
}
