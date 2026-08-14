#include <stdio.h>
#include <stdbool.h>

int main() {
    int time = 20;

    // Standard if...else
    if (time < 18) {
        printf("Good day.\n");
    } else {
        printf("Good evening.\n");
    }

    // Using boolean variable
    bool isDay = time < 18;
    if (isDay) {
        printf("Good day.\n");
    } else {
        printf("Good evening.\n");
    }

    return 0;
}
