#include <stdio.h>

int main() {
    int mark1, mark2, mark3;
    char grade1, grade2, grade3;

    
    printf("Enter marks for friend 1: ");
    scanf("%d", &mark1);
    printf("Enter grade for friend 1: ");
    scanf(" %c", &grade1);

    
    printf("Enter marks for friend 2: ");
    scanf("%d", &mark2);
    printf("Enter grade for friend 2: ");
    scanf(" %c", &grade2);

    
    printf("Enter marks for friend 3: ");
    scanf("%d", &mark3);
    printf("Enter grade for friend 3: ");
    scanf(" %c", &grade3);

    
    printf("\nFriend\tMarks\tGrade\n");
    printf("1\t%d\t%c\n", mark1, grade1);
    printf("2\t%d\t%c\n", mark2, grade2);
    printf("3\t%d\t%c\n", mark3, grade3);

    return 0;
}
