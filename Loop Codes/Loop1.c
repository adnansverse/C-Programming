#include<stdio.h>

int main(){
    int i,n;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        printf("%d", i); //1, 2, 3, 4, 5,
        if(i<n){
            printf(",");
        }
        // if(i!=n){
        //     printf(",");
        // }
    }
}