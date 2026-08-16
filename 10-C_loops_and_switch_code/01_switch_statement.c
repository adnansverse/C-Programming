#include <stdio.h>

int main() {
    // 1. Basic Switch Statement (Days of Week)
    int day = 4;
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
    }

    // 2. Switch with Default Case
    int dayWithDefault = 4;
    switch (dayWithDefault) {
        case 6:
            printf("Today is Saturday\n");
            break;
        case 7:
            printf("Today is Sunday\n");
            break;
        default:
            printf("Looking forward to the Weekend\n");
    }

    // 3. Fall-through Example (Missing break statement)
    int dayFallThrough = 2;
    printf("Fall-through Output: ");
    switch (dayFallThrough) {
        case 1:
            printf("Monday ");
        case 2:
            printf("Tuesday ");
        case 3:
            printf("Wednesday ");
            break;
        case 4:
            printf("Thursday ");
    }
    printf("\n");

    return 0;
}
