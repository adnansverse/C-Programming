#include <stdio.h>

int main() {

    int currentHour;
    int currentMinute;
    int duration;

    // Taking the input from question
    scanf("%d %d %d", &currentHour, &currentMinute, &duration);

    // Convert current time into total minutes
    int totalMinutes = currentHour * 60 + currentMinute + duration;

    //  Now Calculate ending hour and minute
    int endingHour = (totalMinutes / 60) % 24;
    int endingMinute = totalMinutes % 60;

    //  And The Last Print the result
    printf("Ending hour: %d\n", endingHour);
    printf("Ending minute: %d", endingMinute);

    return 0;
}
