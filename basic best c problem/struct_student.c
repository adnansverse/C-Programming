/**
 * ============================================================================
 * BASIC BEST C PROBLEMS: Structures and Array of Structures
 * ============================================================================
 * This file demonstrates how to use `struct` in C to model real-world entities,
 * manage collections of records, and pass structures to functions.
 * ============================================================================
 */

#include <stdio.h>
#include <string.h>

#define MAX_NAME_LEN 50
#define MAX_STUDENTS 5

/* ============================================================================
 * QUESTION: Student Record Management System
 * ----------------------------------------------------------------------------
 * Problem Statement:
 * Define a `Student` structure containing:
 * - Roll Number (integer)
 * - Name (string)
 * - Total Marks (float)
 *
 * Write functions to:
 * 1. Populate an array of Student structures.
 * 2. Display all student records in a formatted table.
 * 3. Find and display the student with the highest marks.
 *
 * Discussion / Questions to consider:
 * - What is the difference between passing a struct by value vs. by pointer?
 * - How does padding and alignment affect the memory size of a `struct`?
 * ============================================================================ */

typedef struct {
    int roll_no;
    char name[MAX_NAME_LEN];
    float marks;
} Student;

void display_students(Student students[], int count) {
    printf("\n%-10s %-25s %-10s\n", "Roll No", "Name", "Marks");
    printf("--------------------------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%-10d %-25s %-10.2f\n", students[i].roll_no, students[i].name, students[i].marks);
    }
    printf("--------------------------------------------------\n");
}

void find_topper(Student students[], int count) {
    if (count <= 0) return;

    int topper_idx = 0;
    for (int i = 1; i < count; i++) {
        if (students[i].marks > students[topper_idx].marks) {
            topper_idx = i;
        }
    }

    printf("\n🏆 Class Topper:\n");
    printf("Name    : %s\n", students[topper_idx].name);
    printf("Roll No : %d\n", students[topper_idx].roll_no);
    printf("Marks   : %.2f\n", students[topper_idx].marks);
}

int main() {
    printf("=== Structures Demo: Student Records ===\n");

    Student class_room[MAX_STUDENTS] = {
        {101, "Alice Smith", 88.5},
        {102, "Bob Jones", 92.0},
        {103, "Charlie Brown", 79.5},
        {104, "Diana Prince", 95.5},
        {105, "Ethan Hunt", 84.0}
    };

    display_students(class_room, MAX_STUDENTS);
    find_topper(class_room, MAX_STUDENTS);

    return 0;
}
