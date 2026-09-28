#include <stdio.h>

int main() {
    /*
    Problem 9:
    Write a program (WAP) that will find the grade of N students. For each student, it will
    take the marks of his/her the attendance (on 5 marks), assignment (on 10 marks), class
    test (on 15 marks), midterm (on 50 marks), term final (on 100 marks). Then based on the
    tables shown below, the program will output his grade.

    Attendance (A) 5%
    Assignments (HW) 10%
    Class Tests (CT) 15%
    Midterm (MT) 30%
    Final (TF) 40%

    90-100 A       70-73 C+       Less than 55 F
    86-89 A-       66-69 C
    82-85 B+       62-65 C-
    78-81 B        58-61 D+
    74-77 B-       55-57 D
    */

    int n;
    float attendance, assignment, ct, midterm, final_exam, total;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%f %f %f %f %f", &attendance, &assignment, &ct, &midterm, &final_exam);

        total = (attendance / 5.0) * 5.0
              + (assignment / 10.0) * 10.0
              + (ct / 15.0) * 15.0
              + (midterm / 50.0) * 30.0
              + (final_exam / 100.0) * 40.0;

        printf("Student %d : ", i);

        if (total >= 90) printf("A\n");
        else if (total >= 86) printf("A-\n");
        else if (total >= 82) printf("B+\n");
        else if (total >= 78) printf("B\n");
        else if (total >= 74) printf("B-\n");
        else if (total >= 70) printf("C+\n");
        else if (total >= 66) printf("C\n");
        else if (total >= 62) printf("C-\n");
        else if (total >= 58) printf("D+\n");
        else if (total >= 55) printf("D\n");
        else printf("F\n");
    }

    return 0;
}
