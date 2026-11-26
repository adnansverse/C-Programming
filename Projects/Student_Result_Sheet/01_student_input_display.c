/*
Project: Student Result Sheet
Step 1: Take one student's information as input and display it

Input:
- Student name (one word)
- Roll number
- Marks of 5 subjects: Bangla, English, Math, Science, ICT

Concepts used: variables, data types, scanf / printf, arrays (basic)
*/

#include <stdio.h>

int main() {
    char name[30];
    int roll;
    int marks[5];
    char subjects[5][10] = {"Bangla", "English", "Math", "Science", "ICT"};

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter roll number: ");
    scanf("%d", &roll);

    for (int i = 0; i < 5; i++) {
        printf("Enter marks of %s (out of 100): ", subjects[i]);
        scanf("%d", &marks[i]);
    }

    printf("\n----- Student Information -----\n");
    printf("Name: %s\n", name);
    printf("Roll: %d\n", roll);
    printf("Marks:\n");
    for (int i = 0; i < 5; i++) {
        printf("  %-8s : %d\n", subjects[i], marks[i]);
    }

    return 0;
}
