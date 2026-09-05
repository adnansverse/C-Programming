#include <stdio.h>

int main() {
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    float sum = 0;
    int length = sizeof(ages) / sizeof(ages[0]);

    for (int i = 0; i < length; i++) {
        sum += ages[i];
    }

    float avg = sum / length;
    printf("The average age is: %.2f\n", avg);
    return 0;
}