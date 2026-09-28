#include <stdio.h>
int main(){
    /* Problem 7: Write a program (WAP) that will run and show keyboard inputs until
       the user types an 'A' at the keyboard. */
    char ch; int count=1;
    while(1){ scanf(" %c",&ch); if(ch=='A') break; printf("Input %d: %c\n",count,ch); count++; }
    return 0;
}
