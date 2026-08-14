#include <stdio.h>

int main() {
    // 1. Door Code Check
    int doorCode = 1337;
    if (doorCode == 1337) {
        printf("Door Check: Correct code. The door is now open.\n");
    } else {
        printf("Door Check: Wrong code. The door remains closed.\n");
    }

    // 2. Positive, Negative, or Zero
    int myNum = 10;
    if (myNum > 0) {
        printf("Number Check: The value is positive.\n");
    } else if (myNum < 0) {
        printf("Number Check: The value is negative.\n");
    } else {
        printf("Number Check: The value is 0.\n");
    }

    // 3. Even or Odd
    int num = 5;
    if (num % 2 == 0) {
        printf("Even/Odd: %d is even.\n", num);
    } else {
        printf("Even/Odd: %d is odd.\n", num);
    }

    // 4. Temperature Check
    int temperature = 30;
    if (temperature < 0) {
        printf("Temp: It's freezing!\n");
    } else if (temperature < 20) {
        printf("Temp: It's cool.\n");
    } else {
        printf("Temp: It's warm.\n");
    }

    return 0;
}
