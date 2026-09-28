#include <stdio.h>
int main(){
    /* Problem 5: Take X and Y. Print the square of X and increment (if X<Y) or decrement
       (if X>Y) X by 1 until X reaches Y. If X equals Y, print "Reached!". */
    int x,y; scanf("%d %d",&x,&y);
    while(x!=y){ printf("%d, ",x*x); if(x<y)x++; else x--; }
    printf("Reached!"); return 0;
}
