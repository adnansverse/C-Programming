/**
 * ============================================================================
 * File Name    : data_types_real_life_example.c
 * Description  : Real-life example of using different C data types to calculate
 *                and display the total cost of items.
 * Target       : Ready to push to GitHub / Single runnable C file.
 * Compile      : gcc data_types_real_life_example.c -o real_life_example
 * Run          : ./real_life_example
 * ============================================================================
 */

#include <stdio.h>

int main() {
    /* ------------------------------------------------------------------------
     * 1. VARIABLE DECLARATIONS & DATA TYPES
     * ------------------------------------------------------------------------
     * Different data types are used based on the kind of data we need:
     * 
     *  - int   : Used for whole numbers (integers), e.g., quantity of items.
     *  - float : Used for numbers with decimals, e.g., prices or total cost.
     *  - char  : Used for a single character, e.g., currency symbols ('$').
     * ------------------------------------------------------------------------
     */

    // Number of items to buy (Whole number -> int)
    int items = 50;

    // Price of a single item (Decimal number -> float)
    float cost_per_item = 9.99f;

    // Currency symbol (Single character inside single quotes -> char)
    char currency = '$';

    /* ------------------------------------------------------------------------
     * 2. ARITHMETIC CALCULATION
     * ------------------------------------------------------------------------
     * Multiplying an 'int' by a 'float' results in a 'float' value.
     * Here, 50 * 9.99 = 499.50
     * ------------------------------------------------------------------------
     */

    float total_cost = items * cost_per_item;

    /* ------------------------------------------------------------------------
     * 3. FORMAT SPECIFIERS IN PRINTF
     * ------------------------------------------------------------------------
     * To print variables, C uses format specifiers inside printf():
     *
     *  - %d   : Placeholder for integer values (int).
     *  - %f   : Placeholder for floating-point values (float).
     *  - %.2f : Limits the decimal output to exactly 2 decimal places.
     *  - %c   : Placeholder for single character values (char).
     *  - \n   : Inserts a new line.
     * ------------------------------------------------------------------------
     */

    printf("--- Shopping Cart Calculation ---\n");

    // Print integer (%d)
    printf("Number of items : %d\n", items);

    // Print float formatted to 2 decimals (%.2f) and char (%c)
    printf("Cost per item   : %.2f %c\n", cost_per_item, currency);

    // Print calculated total cost (%.2f) and char (%c)
    printf("Total cost      : %.2f %c\n", total_cost, currency);

    return 0;
}