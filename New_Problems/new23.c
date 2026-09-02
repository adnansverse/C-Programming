#include<stdio.h>
int main (){

int a,b,c;
int highest,lowest,difference;

printf("Enter the three values :");
scanf("%d%d%d",&a,&b,&c);


if (a>b && a>c){
    printf("Highest is a");
}else if (b>a && b>c) {
printf("Highest is b");

}else {
printf("Highest is c");


}
if (a < b && a < c)
        lowest = a;
    else if (b < a && b < c)
        lowest = b;
    else
        lowest = c;

difference = highest - lowest;

printf("Difference :%d",difference);















return 0;
}
