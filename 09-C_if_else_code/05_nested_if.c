#include <stdio.h>
#include <stdbool.h>

int main() {
    // Example 1
    int x = 15;
    int y = 25;

    if (x > 10) {
        printf("x is greater than 10\n");
        if (y > 20) {
            printf("y is also greater than 20\n");
        }
    }

    // Example 2: Real-life Voting Eligibility
    int age = 20;
    bool isCitizen = true;

    if (age >= 18) {
        printf("Old enough to vote.\n");
        if (isCitizen) {
            printf("And you are a citizen, so you can vote!\n");
        } else {
            printf("But you must be a citizen to vote.\n");
        }
    } else {
        printf("Not old enough to vote.\n");
    }

    return 0;
}
