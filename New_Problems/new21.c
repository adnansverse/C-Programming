#include<stdio.h>
int main(){
int temperature;

printf("Whats the temperature today :");
scanf("%d",&temperature);

if (temperature<0){
    printf("Freezing");
}else if (temperature<15){

printf("Cold");

}

else if (temperature<=25){
    printf("Warm");
}
else if (temperature<=35){
    printf("Hot");
}

else {
    printf("Very Hot");
}







return 0;
}

