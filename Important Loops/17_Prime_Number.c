#include <stdio.h>
int main(){
    /* Problem 17: WAP that will determine whether a number is prime or not. */
    int n,prime=1; scanf("%d",&n);
    if(n<=1)prime=0; else for(int i=2;i<n;i++) if(n%i==0){prime=0;break;}
    printf(prime?"Prime":"Not prime"); return 0;
}
