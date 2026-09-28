#include <stdio.h>
int main(){
    /* Problem 18: WAP that will determine whether an integer is palindrome number or not. */
    int n,original,d,rev=0; scanf("%d",&n); original=n;
    while(n!=0){d=n%10;rev=rev*10+d;n/=10;}
    printf(original==rev?"Yes":"No"); return 0;
}
