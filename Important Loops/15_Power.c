#include <stdio.h>
int main(){
    /* Problem 15: Write a program (WAP) that will find x^y (x to the power y) where x,y are positive integers. */
    int x,y; long long p=1; scanf("%d %d",&x,&y); for(int i=1;i<=y;i++)p*=x; printf("%lld",p); return 0;
}
