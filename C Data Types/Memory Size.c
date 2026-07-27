/**
 * ============================================================================
 * File Name    : sizeof_tutorial.c
 * Description  : Understanding the 'sizeof' operator and memory sizes in C.
 * Target       : Ready to push to GitHub / Single runnable C file.
 * Compile      : gcc sizeof_tutorial.c -o sizeof_tutorial
 * Run          : ./sizeof_tutorial
 * ============================================================================
 */

#include <stdio.h>

int main() {
    /* ------------------------------------------------------------------------
     * 1. INTRODUCTION TO DATA TYPE MEMORY SIZES
     * ------------------------------------------------------------------------
     * Every data type in C occupies a specific amount of space in computer memory.
     * Memory is measured in "bytes".
     *
     * Typical sizes on most modern systems:
     *  - char   : 1 byte
     *  - int    : 2 or 4 bytes (commonly 4 bytes)
     *  - float  : 4 bytes
     *  - double : 8 bytes
     * ------------------------------------------------------------------------
     */

    // Variable declarations
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    /* ------------------------------------------------------------------------
     * 2. THE 'sizeof' OPERATOR & FORMAT SPECIFIERS
     * ------------------------------------------------------------------------
     * - 'sizeof' is a built-in operator that returns the size (in bytes) of a
     *   data type or variable.
     * 
     * - Format Specifier (%zu vs %d):
     *   We use "%zu" instead of "%d" because sizeof returns a value of type
     *   'size_t' (an unsigned integer type). While %d might work on some systems,
     *   using %zu is standard, safer, and portable across all compilers.
     * ------------------------------------------------------------------------
     */

    printf("--- Memory Sizes of Variables ---\n");
    printf("Size of int    : %zu bytes\n", sizeof(myInt));
    printf("Size of float  : %zu bytes\n", sizeof(myFloat));
    printf("Size of double : %zu bytes\n", sizeof(myDouble));
    printf("Size of char   : %zu byte\n\n", sizeof(myChar));

    // Note: You can also pass data types directly to sizeof:
    printf("--- Direct Type Checking ---\n");
    printf("sizeof(int)    : %zu bytes\n", sizeof(int));
    printf("sizeof(char)   : %zu byte\n\n", sizeof(char));


    /* ------------------------------------------------------------------------
     * 3. WHY SHOULD YOU KNOW MEMORY SIZES?
     * ------------------------------------------------------------------------
     * - Memory Management: Helps you track how much memory your program uses.
     * - Performance & Efficiency: Crucial for large applications or systems 
     *   with limited memory (e.g., embedded devices).
     *
     * Example Scenario:
     * - A 'char' takes 1 byte.
     * - An array of 1,000 'char' elements will use 1,000 bytes (~1 KB) of memory.
     * - Choosing the correct data type saves memory and boosts performance.
     * ------------------------------------------------------------------------
     */

    char charArray[1000];
    printf("--- Array Memory Calculation Example ---\n");
    printf("Size of 1 char             : %zu byte\n", sizeof(char));
    printf("Size of array of 1000 chars: %zu bytes (1 KB)\n\n", sizeof(charArray));


    /* ------------------------------------------------------------------------
     * 4. QUICK QUIZ / SELF-ASSESSMENT
     * ------------------------------------------------------------------------
     * Question : What is the typical memory size of an 'int' in C?
     * Options  : 1 byte | 4 bytes | 8 bytes | 16 bytes
     * Answer   : Typically 4 bytes on most 32-bit and 64-bit modern systems.
     * ------------------------------------------------------------------------
     */

    printf("--- Quiz Answer ---\n");
    printf("Typical size of 'int' on modern machines: 4 bytes\n");

    return 0;
}