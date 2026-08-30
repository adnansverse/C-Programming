#include<stdio.h>
int main(){
float gpa;
int attendence;
printf("Students GPA :");
scanf("%f",&gpa);

printf("Students Attendece :");
scanf("%d",&attendence);

if (gpa>= 3.5 && attendence >= 80){
    printf("Succesfullu Qualified");

}else {

printf("Sorry Not Qualified");

}







return 0;
}
