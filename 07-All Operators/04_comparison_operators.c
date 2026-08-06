// Chapter: C Comparison Operators

#include <stdio.h>

int main() {
    int x = 5;
    int y = 3;

    printf("x > y: %d\n", x > y);   // 1 (true)
    printf("x < y: %d\n", x < y);   // 0 (false)
    printf("x == y: %d\n", x == y); // 0 (false)
    printf("x != y: %d\n", x != y); // 1 (true)
    printf("x >= y: %d\n", x >= y); // 1 (true)
    printf("x <= y: %d\n", x <= y); // 0 (false)

    // Real-Life Example: Voting Eligibility
    int age = 18;
    printf("Old enough to vote: %d\n", age >= 18); // 1

    // Real-Life Example: Password Length Check
    int passwordLength = 5;
    printf("Is password long enough (>=8): %d\n", passwordLength >= 8); // 0

    return 0;
}
