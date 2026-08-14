#include <stdio.h>
#include <stdbool.h>

int main() {
    int myAge = 25;
    int votingAge = 18;

    // Check if myAge is greater than or equal to votingAge
    printf("Can vote: %d\n", myAge >= votingAge); // Returns 1 (true)

    // Using boolean condition inside an if...else statement
    if (myAge >= votingAge) {
        printf("Old enough to vote!\n");
    } else {
        printf("Not old enough to vote.\n");
    }

    return 0;
}
