#include<stdio.h>
// 11 -> 1/11, 2, 13, 37
int main(){
    int num, prime = 1;
    scanf("%d", &num);

    if(num<2){
        prime = 0;
    }

    for(int i=2; i<num; i++){ // 13
        if(num % i == 0){
            prime = 0;
            break;
        }
    }
    
    if(prime == 1){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}