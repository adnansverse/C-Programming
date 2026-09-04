#include <stdio.h>

int main()   {

    double L, W, r, cost;
    double remainingArea;
    double totalCost;

    // Taking The  inputs
    scanf("%lf %lf %lf %lf", &L, &W, &r, &cost);

    // Calculate remaining area
    remainingArea = (L * W) - (3.1416 * r * r);

    // Calculate total painting cost for both sides
    totalCost = remainingArea * 2 * cost;

    // Print results with 2 decimal places
    printf("Remaining area: %.2f\n", remainingArea);
    printf("Total painting cost: %.2f", totalCost);

    return 0;
}
