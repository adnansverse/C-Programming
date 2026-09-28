#include <stdio.h>
int main(){
    /* Problem 3: Write a program (WAP) that will print following series upto Nth terms.
       1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, …… */
    int n; scanf("%d", &n);
    for(int i=1;i<=n;i++){ printf("%d",i%2?1:0); if(i<n) printf(", "); }
    return 0;
}
