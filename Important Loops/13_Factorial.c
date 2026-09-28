#include <stdio.h>
int main(){
    /* Problem 13: Write a program (WAP) that will print the factorial (N!) of a given number N. */
    int n; long long fact=1; scanf("%d",&n);
    for(int i=1;i<=n;i++) fact*=i; printf("%d! = %lld",n,fact); return 0;
}
