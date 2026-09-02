
#include <stdio.h>

int main()
{
    int a, b, c;
    int highest, lowest, difference;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find highest
    if (a > b && a > c)
        highest = a;
    else if (b > a && b > c)
        highest = b;
    else
        highest = c;

    // Find lowest
    if (a < b && a < c)
        lowest = a;
    else if (b < a && b < c)
        lowest = b;
    else
        lowest = c;

    difference = highest - lowest;

    printf("Difference = %d", difference);

    return 0;
}
