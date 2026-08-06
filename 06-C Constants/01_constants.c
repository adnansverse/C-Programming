// Chapter: C Constants

#include <stdio.h>

int main() {
    // Constant declaration
    const int MY_NUM = 15;
    // MY_NUM = 10; // Error: assignment of read-only variable

    // Good practice: Uppercase naming for constants
    const int MINUTES_PER_HOUR = 60;
    const int MONTHS_IN_YEAR = 12;
    const int BIRTH_YEAR = 1980;

    printf("Minutes per hour: %d\n", MINUTES_PER_HOUR);
    printf("Months in a year: %d\n", MONTHS_IN_YEAR);
    printf("Birth year: %d\n", BIRTH_YEAR);

    return 0;
}