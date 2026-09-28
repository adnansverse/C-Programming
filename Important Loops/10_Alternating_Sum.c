#include <stdio.h>
int main(){
    /* Problem 10: Find the sum of first N terms: 1, -2, 3, -4, 5, -6, ... */
    int n,sum=0; scanf("%d",&n);
    for(int i=1;i<=n;i++) if(i%2) sum+=i; else sum-=i;
    printf("Result: %d",sum); return 0;
}
