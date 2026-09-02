#include<stdio.h>
int main(){
int idcard, pin;

printf("Enter Your Card :");
scanf("%d",&idcard);

printf("Enter Your Pin :");
scanf("%d",&pin);

if (idcard == 1234 || pin ==5678){
    printf("Access Granted");

}else {

printf("Access Denied");

}









return 0;
}
