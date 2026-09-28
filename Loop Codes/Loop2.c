#include<stdio.h>

int main(){
    int i,n, odd=1;
    scanf("%d", &n); // 5
    for(i=1; i<=n; i++){
        printf("%d, ", odd); //1, 3, 5, 7, 9
        odd = odd+2; // 11
    }

    // for(i=1; i<=n; i++){ // i = 1 2 3 4 5
    //     //1, 3, 5, 7, 9
    //     // int series = i*2 - 1;
    //     printf("%d,", i*2 - 1);
    // }
}