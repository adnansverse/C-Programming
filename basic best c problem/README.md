# Basic Best C Problems

This folder contains a curated collection of fundamental C programming problems designed to build core programming concepts, problem-solving skills, and best practices in C.

## Files Included

1. **`factorial_fibonacci.c`**
   - **Questions Covered:**
     - Factorial calculation (Iterative vs. Recursive approaches).
     - Fibonacci series generation and Nth term computation.
   - **Key Concepts:** Recursion, stack frames, time/space complexity, iteration.

2. **`array_ops.c`**
   - **Questions Covered:**
     - Finding the second largest element in an array in a single pass ($O(n)$ time).
     - Array left rotation.
   - **Key Concepts:** Linear traversal, tracking multiple max values, array indexing.

3. **`string_ops.c`**
   - **Questions Covered:**
     - Case-insensitive Palindrome verification.
     - Character classification (counting vowels, consonants, digits, and spaces).
   - **Key Concepts:** Character pointers, ASCII manipulation, `<ctype.h>` standard library functions.

4. **`pointer_memory.c`**
   - **Questions Covered:**
     - Dynamic memory allocation (`malloc`, `free`) to calculate sum and average.
     - Swapping variables using pointers (Call by Reference).
   - **Key Concepts:** Heap vs. stack memory, avoiding memory leaks and dangling pointers, pointer dereferencing.

5. **`struct_student.c`** (✨ New)
   - **Questions Covered:**
     - Student Record Management System using `struct`.
     - Displaying records and finding class toppers.
   - **Key Concepts:** User-defined data types, arrays of structures, formatting output.

6. **`sorting_searching.c`** (✨ New)
   - **Questions Covered:**
     - Bubble Sort with early termination optimization.
     - Binary Search on sorted arrays.
   - **Key Concepts:** Sorting algorithms, $O(n \log n)$ vs $O(n^2)$ complexity, divide-and-conquer searching.

---

## How to Compile and Run

You can compile any of these files using `gcc` in your terminal:

```bash
# Compile Factorial & Fibonacci
gcc "basic best c problem/factorial_fibonacci.c" -o factorial_fibonacci && ./factorial_fibonacci

# Compile Array Operations
gcc "basic best c problem/array_ops.c" -o array_ops && ./array_ops

# Compile String Operations
gcc "basic best c problem/string_ops.c" -o string_ops && ./string_ops

# Compile Pointer & Memory Management
gcc "basic best c problem/pointer_memory.c" -o pointer_memory && ./pointer_memory

# Compile Student Structures
gcc "basic best c problem/struct_student.c" -o struct_student && ./struct_student

# Compile Sorting & Searching
gcc "basic best c problem/sorting_searching.c" -o sorting_searching && ./sorting_searching
```
