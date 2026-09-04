#include<stdio.h>
int main() {
int i= 1;
int sum = 0;

while(i <= 50) {
sum = i + sum;
i++;

}
printf("The total sum :%d",sum);


return 0;
}
