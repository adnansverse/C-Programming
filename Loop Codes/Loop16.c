// the divisors of 12 are 1, 2, 3, 4, 6, and 12, and 
//the divisors of 18 are 1, 2, 3, 6, 9, and 18. 
//Their common divisors are 1, 2, 3, and 6, making the GCD of 12 and 18 equal to 6.

#include<stdio.h>

int main(){
    int num1, num2, gcd, lcm;

    scanf("%d%d", &num1, &num2);

    for(int i=1; i<= num1 && i<=num2; i++){
        if( num1 % i == 0 && num2 % i == 0){
            gcd = i; //1
        }
    }

    lcm = (num1*num2) / gcd;
    printf("GCD: %d\n", gcd);
    printf("LCM: %d", lcm);
}