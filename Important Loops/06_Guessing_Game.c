#include <stdio.h>
int main(){
    /* Problem 6: Player-1 picks X and Player-2 guesses within N tries. Wrong guesses print
       "Wrong, N-1 Choice(s) Left!"; a correct guess prints "Right, Player-2 wins!";
       after N wrong tries print "Player-1 wins!". Hint: Use break/continue. */
    int x,n,g,won=0; scanf("%d %d",&x,&n);
    for(int i=1;i<=n;i++){ scanf("%d",&g); if(g==x){printf("Right, Player-2 wins!");won=1;break;} printf("Wrong, %d Choice(s) Left!\n",n-i); }
    if(!won) printf("Player-1 wins!"); return 0;
}
