#include <stdio.h>
int main(){
    /* Problem 16: WAP that will find the GCD (greatest common divisor) and LCM (least common multiple) of two positive integers. */
    int a,b,x,y,r,g; long long l; scanf("%d %d",&a,&b); x=a;y=b;
    while(y!=0){r=x%y;x=y;y=r;} g=x; l=(long long)a*b/g;
    printf("GCD: %d\nLCM: %lld",g,l); return 0;
}
