#include <stdio.h>
int main(){
    /* Problem 20: Take integer n and find the sum of: 1 + 12 + 123 + 1234 + ... up to n terms. */
    int n; long long term=0,sum=0; scanf("%d",&n);
    for(int i=1;i<=n;i++){term=term*10+i;sum+=term;} printf("Result: %lld",sum); return 0;
}
