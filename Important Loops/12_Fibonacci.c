#include <stdio.h>
int main(){
    /* Problem 12: Write a program (WAP) that will print Fibonacci series upto Nth terms.
       1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, …… */
    int n,a=1,b=1,next; scanf("%d",&n);
    for(int i=1;i<=n;i++){ printf("%d",a); if(i<n)printf(", "); next=a+b;a=b;b=next; }
    return 0;
}
