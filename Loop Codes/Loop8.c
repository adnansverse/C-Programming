#include<stdio.h>

int main(){
    int number, revNum=0;
    scanf("%d", &number); //13579 - 97

    for( ; number>0 ;){
        int lastDigit = number%10; //9 -> 7 -> 5 -> 3 -> 1
        revNum = revNum*10 + lastDigit; // 9 -> 9*10 + 7 -> 97*10 + 5
        number = number/10; //1357 -> 135 -> 13 -> 1 -> 0
    }
    printf("%d", revNum);
}