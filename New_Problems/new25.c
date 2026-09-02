#include<stdio.h>
int main (){

int num1,num2,num3,add;
float average;

printf("Please input the three numbers :");
scanf("%d%d%d",&num1,&num2,&num3);

add = num1+num2+num3;
average = add/3.0;

printf("Avarage is %f",average);






return 0;
}
