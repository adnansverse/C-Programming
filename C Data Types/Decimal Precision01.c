/*
 ============================================================================
  C PROGRAMMING: DECIMAL PRECISION GUIDE
 ============================================================================
  
  WHAT IS DECIMAL PRECISION?
  When you print floating-point numbers in C using %f or %lf, the computer 
  displays 6 decimal places by default (e.g., 3.5 becomes 3.500000).
  
  Decimal precision allows you to control how many digits appear 
  after the dot (.).
  
  SYNTAX RULE:
  Use a dot (.) followed by a number inside the format specifier:
  - %.1f  -> Shows 1 decimal place
  - %.2f  -> Shows 2 decimal places
  - %.4f  -> Shows 4 decimal places
 ============================================================================
*/

#include <stdio.h>

int main() {

    // ----------------------------------------------------------------------
    // 1. DEFAULT BEHAVIOR (Without Setting Precision)
    // ----------------------------------------------------------------------
    float myFloatNum = 3.5;
    double myDoubleNum = 19.99;

    printf("--- Default Output (6 Decimal Places) ---\n");
    printf("Float default : %f\n", myFloatNum);   // Output: 3.500000
    printf("Double default: %lf\n\n", myDoubleNum); // Output: 19.990000


    // ----------------------------------------------------------------------
    // 2. SETTING DECIMAL PRECISION
    // ----------------------------------------------------------------------
    printf("--- Custom Decimal Precision ---\n");

    // Show only 1 digit after the decimal point
    printf("1 decimal place : %.1f\n", myFloatNum); // Output: 3.5

    // Show only 2 digits after the decimal point
    printf("2 decimal places: %.2f\n", myFloatNum); // Output: 3.50

    // Show only 4 digits after the decimal point
    printf("4 decimal places: %.4f\n\n", myFloatNum); // Output: 3.5000


    // ----------------------------------------------------------------------
    // 3. QUICK SUMMARY / REFERENCE TABLE
    // ----------------------------------------------------------------------
    /*
      Specifier  | Description             | Example Output for 3.5
      -----------|-------------------------|-----------------------
      %f         | Default (6 digits)      | 3.500000
      %.1f       | 1 decimal place         | 3.5
      %.2f       | 2 decimal places        | 3.50
      %.4f       | 4 decimal places        | 3.5000
      
      QUIZ ANSWER:
      Q: Which syntax prints a float with 2 decimal places?
      A: printf("%.2f", myFloatNum);
    */

    return 0;
}