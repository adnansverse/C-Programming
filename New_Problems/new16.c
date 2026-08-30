#include<stdio.h>
int main(){
int temperature;
printf("Whats the temperature :");
scanf("%d",&temperature);

if (temperature <= 0){
    printf("The temperature is  below freezing point\n");
} else {
    printf("The temperature is above freezing point");


}



return 0;
}

