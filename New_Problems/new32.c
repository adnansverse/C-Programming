
#include <stdio.h>

int main()  {

    int ct1, ct2, ct3, midterm;
    float assignment;
    double ctAverage, finalScore;

    // Taking The inputs
    scanf("%d %d %d %d %f", &ct1, &ct2, &ct3, &midterm, &assignment);

    // Calculate CT average
    ctAverage = (double)(ct1 + ct2 + ct3) / 3;

    // Calculate final score
    finalScore = (ctAverage * 0.35) + (midterm * 0.25) + (assignment * 0.40);

    // Now  Printing the results
    printf("CT average: %.2f\n", ctAverage);
    printf("Final score: %.2f", finalScore);

    return 0;
}
