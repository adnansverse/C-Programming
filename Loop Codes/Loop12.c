#include<stdio.h>

int main(){
    int n, first=1, second=1;
    scanf("%d", &n);

    if(n >= 1){
        printf("1");
    }
    if(n >= 2){
        printf(",1");
    }

    for(int i=3; i<=n; i++){
        int next = first+second; // 1 + 1 -> 3
        printf(",%d", next); // 2

        first = second; //1
        second = next; //2
    }
    
}