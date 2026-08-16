#include <stdio.h>

int main() {
    // 1. Countdown
    int countdown = 3;
    while (countdown > 0) {
        printf("%d\n", countdown);
        countdown--;
    }
    printf("Happy New Year.!\n");

    // 2. Print Even Numbers (0 to 10)
    int i = 0;
    while (i <= 10) {
        printf("%d\n", i);
        i += 2;
    }

    // 3. Reverse a Number
    int numbers = 12345;
    int revNumbers = 0;
    while (numbers) {
        revNumbers = revNumbers * 10 + numbers % 10;
        numbers /= 10;
    }
    printf("Reversed Number: %d\n", revNumbers);

    // 4. While Loop + If-Else (Yatzy Game)
    int dice = 1;
    while (dice <= 6) {
        if (dice < 6) {
            printf("No Yatzy\n");
        } else {
            printf("Yatzy!\n");
        }
        dice = dice + 1;
    }

    return 0;
}
