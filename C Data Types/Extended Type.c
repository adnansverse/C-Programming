/**
 * ============================================================================
 * File Name    : extended_data_types.c
 * Description  : Comprehensive guide to extended data types and type modifiers
 *                (short, long, unsigned) in C, including memory sizes, ranges, 
 *                and format specifiers.
 * Target       : GitHub Ready / Single-file C program.
 * Compile      : gcc extended_data_types.c -o extended_data_types
 * Run          : ./extended_data_types
 * ============================================================================
 */

#include <stdio.h>

int main() {
    /* ========================================================================
     * 1. INTRODUCTION TO EXTENDED DATA TYPES
     * ========================================================================
     * Beyond basic types (int, float, double, char), C provides modifiers:
     * 
     *  - short    : Reduces memory size (good for saving space).
     *  - long     : Increases memory size and numeric capacity.
     *  - unsigned : Allows ONLY non-negative numbers (0 and positive). 
     *               Doubles the positive range because no sign bit is needed.
     * 
     * SUMMARY TABLE OF SPECIFIERS & RANGES:
     * ------------------------------------------------------------------------
     * Type                   | Common Size  | Format Specifier
     * ------------------------------------------------------------------------
     * short int              | 2 bytes      | %hd
     * unsigned int           | 2 or 4 bytes | %u
     * long int               | 4 or 8 bytes | %ld
     * long long int          | 8 bytes      | %lld
     * unsigned long int      | 4 or 8 bytes | %lu
     * unsigned long long int | 8 bytes      | %llu
     * long double            | 8-16 bytes   | %Lf
     * ------------------------------------------------------------------------
     */


    /* ========================================================================
     * 2. VARIABLE DECLARATIONS & DEMONSTRATION
     * ========================================================================
     */

    // Standard types
    int normalInt = 1000;                       // Standard integer
    double normalDouble = 3.14;                 // Standard floating-point

    // Extended integer types
    short int small = -100;                     // Smaller range (-32,768 to 32,767)
    unsigned int count = 25;                    // Positive integers only (0 and up)
    long int big = 1234567890L;                 // Larger integer (suffix 'L' optional but good practice)
    long long int veryBig = 9223372036854775807LL; // Max signed 64-bit int (suffix 'LL')
    
    // Unsigned extended integer (Suffix 'U' or 'ULL')
    unsigned long long int huge = 18446744073709551615ULL; // Max unsigned 64-bit int

    // High precision floating-point (Suffix 'L')
    long double precise = 3.141592653589793238L;


    /* ========================================================================
     * 3. PRINTING VALUES WITH SPECIFIC FORMAT SPECIFIERS
     * ========================================================================
     * Each extended type requires its matching format specifier in printf():
     *  - %d   -> Standard signed int
     *  - %lf  -> Standard double
     *  - %hd  -> short int
     *  - %u   -> unsigned int
     *  - %ld  -> long int
     *  - %lld -> long long int
     *  - %llu -> unsigned long long int
     *  - %Lf  -> long double
     * ------------------------------------------------------------------------
     */

    printf("===========================================\n");
    printf("     DEMONSTRATING EXTENDED DATA TYPES     \n");
    printf("===========================================\n");

    printf("Normal int             : %d\n", normalInt);
    printf("Normal double          : %lf\n", normalDouble);
    printf("Short int              : %hd\n", small);
    printf("Unsigned int           : %u\n", count);
    printf("Long int               : %ld\n", big);
    printf("Long Long int          : %lld\n", veryBig);
    printf("Unsigned Long Long int : %llu\n", huge);
    printf("Long double            : %Lf\n\n", precise);


    /* ========================================================================
     * 4. CHECKING MEMORY SIZES USING 'sizeof'
     * ========================================================================
     * Note: Exact sizes depend on your system/compiler architecture 
     * (32-bit vs 64-bit).
     * Always use %zu for formatting sizeof (which returns type size_t).
     * ------------------------------------------------------------------------
     */

    printf("===========================================\n");
    printf("      SYSTEM MEMORY SIZES (IN BYTES)       \n");
    printf("===========================================\n");

    printf("Size of int                    : %zu bytes\n", sizeof(int));
    printf("Size of double                 : %zu bytes\n", sizeof(double));
    printf("Size of short int              : %zu bytes\n", sizeof(short int));
    printf("Size of unsigned int           : %zu bytes\n", sizeof(unsigned int));
    printf("Size of long int               : %zu bytes\n", sizeof(long int));
    printf("Size of long long int          : %zu bytes\n", sizeof(long long int));
    printf("Size of unsigned long long int : %zu bytes\n", sizeof(unsigned long long int));
    printf("Size of long double            : %zu bytes\n\n", sizeof(long double));


    /* ========================================================================
     * 5. KEY TAKEAWAYS & PRACTICAL ADVICE
     * ========================================================================
     * - Default Usage: For 90% of everyday programs, 'int', 'float', 'double',
     *   and 'char' are sufficient.
     * - Extended Types: Use extended types when you need specific control over
     *   memory (embedded devices) or need to process huge values (like timestamps,
     *   cryptography, or astronomical numbers).
     * ------------------------------------------------------------------------
     */

    return 0;
}