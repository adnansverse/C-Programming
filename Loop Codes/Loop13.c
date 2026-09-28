#include<stdio.h>

int main(){
    int n, fact=1;
    scanf("%d", &n);
    printf("%d! = ",n);
    int demo = n; // 5

    for(int i=1; i<=n; i++){
        printf("%d", demo);
        if(i!=n){
            printf(" X ");
        }
        fact = fact * i;
        demo--;
    }
    printf(" = %d", fact);
}