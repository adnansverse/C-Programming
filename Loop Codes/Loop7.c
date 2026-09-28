#include<stdio.h>

int main(){

    for(int i=1;  ;i++){
       char c;
       scanf(" %c", &c);
       if(c == 'A'){
        break;
       }
       printf("Input %d: %c\n",i, c);
    }

return 0;
}