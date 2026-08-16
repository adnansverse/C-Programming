#include <stdio.h>

int main() {
    // 1. Standard While Loop
    int i = 0;
    while (i < 5) {
        printf("%d\n", i);
        i++;
    }

    // 2. Countdown Example
    int countdown = 3;
    while (countdown > 0) {
        printf("%d\n", countdown);
        countdown--;
    }
    printf("Happy New Year.!\n");

    // 3. Condition False from Start
    int j = 10;
    while (j < 5) {
        printf("This will never be printed\n");
        j++;
    }

    return 0;
}
