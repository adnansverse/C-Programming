#include <stdio.h>

int main() {
    int mark;
    char grade;

    printf("Enter Marks: ");
    scanf("%d", &mark); 

    // শর্ত চেক
    if (mark >= 90) {
        grade = 'A';
    } else if (mark >= 80) {
        grade = 'B';
    } else if (mark >= 70) {
        grade = 'C';
    } else {
        grade = 'F';
    }

    printf("Grade is: %c\n", grade);

    return 0;
}
