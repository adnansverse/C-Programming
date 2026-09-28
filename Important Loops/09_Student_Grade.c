#include <stdio.h>
int main(){
    /* Problem 9: Find the grade of N students from Attendance(5%), Assignment(10%),
       CT(15%), Midterm(30%), Final(40%). Grades: 90-100 A, 86-89 A-, 82-85 B+,
       78-81 B, 74-77 B-, 70-73 C+, 66-69 C, 62-65 C-, 58-61 D+, 55-57 D, <55 F. */
    int n; double a,hw,ct,mt,tf,total; scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%lf %lf %lf %lf %lf",&a,&hw,&ct,&mt,&tf);
        total=a/5*5+hw/10*10+ct/15*15+mt/50*30+tf/100*40;
        printf("Student %d : ",i);
        if(total>=90)printf("A"); else if(total>=86)printf("A-"); else if(total>=82)printf("B+");
        else if(total>=78)printf("B"); else if(total>=74)printf("B-"); else if(total>=70)printf("C+");
        else if(total>=66)printf("C"); else if(total>=62)printf("C-"); else if(total>=58)printf("D+");
        else if(total>=55)printf("D"); else printf("F"); printf("\n");
    } return 0;
}
