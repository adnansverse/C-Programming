// Chapter: C Type Conversion

#include <stdio.h>

int main() {
    // Integer Division Issue
    int x = 5;
    int y = 2;
    int sum1 = 5 / 2;
    printf("Implicit int division: %d\n", sum1); // Outputs 2

    // Implicit Conversion (int to float)
    float myFloat = 9;
    printf("Implicit float conversion: %f\n", myFloat); // Outputs 9.000000

    // Implicit Conversion Loss (float to int)
    int myInt = 9.99;
    printf("Truncated int value: %d\n", myInt); // Outputs 9

    // Division with float variable (still integer division without casting)
    float sum2 = 5 / 2;
    printf("Division before assignment: %f\n", sum2); // Outputs 2.000000

    // Explicit Conversion (Type Casting)
    float sum3 = (float) 5 / 2;
    printf("Explicit casting result: %.1f\n", sum3); // Outputs 2.5

    // Explicit Conversion using variables
    int num1 = 5;
    int num2 = 2;
    float explicitSum = (float) num1 / num2;
    printf("Variable explicit casting: %.1f\n", explicitSum); // Outputs 2.5

    // Real-Life Example: Score Percentage Calculation
    int maxScore = 500;
    int userScore = 423;
    float percentage = (float) userScore / maxScore * 100.0;
    printf("User's percentage is %.2f%%\n", percentage);

    return 0;
}