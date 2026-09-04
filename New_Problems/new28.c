#include<stdio.h>
int main (){
int a;
float b;
double c;

printf("Whats the value of a:");
scanf("%d",&a);

printf("Whats the value of b:");
scanf("%f",&b);

printf("Whats the value of c:");
scanf("%lf",&c);


double X = (3.31 * a * a + 2.01 * b * b * b)/
          (7.16 * b * b + 2.01 * a * a * a);

double Y = a - b / 3 + 2 * c - 1;

double z = ((double)(a + b) / 2) * c;

 printf("X = %.6f\n", X);
    printf("Y = %.6f\n", Y);
    printf("z = %.6f", z);


return 0;
}
