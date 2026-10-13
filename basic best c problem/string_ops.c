/**
 * ============================================================================
 * BASIC BEST C PROBLEMS: String Operations
 * ============================================================================
 * This file contains fundamental string processing problems: palindrome verification
 * and character frequency/type counting.
 * ============================================================================
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

/* ============================================================================
 * QUESTION 1: Palindrome String Check
 * ----------------------------------------------------------------------------
 * Problem Statement:
 * Write a function that checks whether a given string is a palindrome.
 * (A palindrome reads the same forwards and backwards, typically ignoring
 * case and spaces or non-alphanumeric characters).
 *
 * Discussion / Questions to consider:
 * - How do you use two pointers (start and end) moving towards each other?
 * - How does `tolower()` help make the check case-insensitive?
 * ============================================================================ */

bool is_palindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        // Skip non-alphanumeric characters if needed, or do a direct comparison:
        // Here we do a simple case-insensitive comparison of all characters.
        char c1 = tolower((unsigned char)str[left]);
        char c2 = tolower((unsigned char)str[right]);

        if (c1 != c2) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}


/* ============================================================================
 * QUESTION 2: Count Vowels, Consonants, Digits, and Spaces
 * ----------------------------------------------------------------------------
 * Problem Statement:
 * Write a function that analyzes a string and counts the number of:
 * - Vowels (a, e, i, o, u)
 * - Consonants
 * - Digits (0-9)
 * - Whitespaces
 *
 * Discussion / Questions to consider:
 * - Which standard library functions from <ctype.h> can simplify classification?
 * ============================================================================ */

void analyze_string(const char *str, int *vowels, int *consonants, int *digits, int *spaces) {
    *vowels = 0;
    *consonants = 0;
    *digits = 0;
    *spaces = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower((unsigned char)str[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            (*vowels)++;
        } else if ((ch >= 'a' && ch <= 'z')) {
            (*consonants)++;
        } else if (isdigit((unsigned char)str[i])) {
            (*digits)++;
        } else if (isspace((unsigned char)str[i])) {
            (*spaces)++;
        }
    }
}


int main() {
    printf("=== String Operations Demo ===\n\n");

    const char *test_str = "Racecar 101";
    printf("Testing string: \"%s\"\n", test_str);

    if (is_palindrome(test_str)) {
        printf("Result: It is a palindrome (ignoring case).\n");
    } else {
        printf("Result: It is NOT a palindrome.\n");
    }

    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    analyze_string(test_str, &vowels, &consonants, &digits, &spaces);

    printf("\nString Analysis:\n");
    printf("- Vowels     : %d\n", vowels);
    printf("- Consonants : %d\n", consonants);
    printf("- Digits     : %d\n", digits);
    printf("- Spaces     : %d\n", spaces);

    return 0;
}
