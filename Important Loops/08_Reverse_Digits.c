#include <stdio.h>
int main(){
    /* Problem 8: Write a program (WAP) that will reverse the digits of an input integer. */
    int n,d,rev=0; scanf("%d",&n);
    while(n!=0){ d=n%10; rev=rev*10+d; n/=10; }
    printf("%d",rev); return 0;
}
