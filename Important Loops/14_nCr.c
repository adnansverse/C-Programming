#include <stdio.h>
long long fact(int n){long long f=1;for(int i=1;i<=n;i++)f*=i;return f;}
int main(){
    /* Problem 14: Write a program (WAP) that will find nCr where n >= r; n and r are integers. */
    int n,r; scanf("%d %d",&n,&r); printf("%lld",fact(n)/(fact(r)*fact(n-r))); return 0;
}
