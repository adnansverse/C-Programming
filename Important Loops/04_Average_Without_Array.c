#include <stdio.h>
int main(){
    /* Problem 4: Write a program (WAP) that will take N numbers as inputs and compute their average.
       Restriction: Without using any array. */
    int n; double x,sum=0; scanf("%d",&n);
    for(int i=0;i<n;i++){ scanf("%lf",&x); sum+=x; }
    printf("AVG of %d inputs: %.6f",n,sum/n); return 0;
}
