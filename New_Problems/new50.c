#include<stdio.h>
int main ()
{
    int sum = 0;
    int num;

    printf("Enter the 10 numbers :\n");
    for (int i = 1; i<=10; i++)
    {
        scanf("%d",&num);
    if (num<0)
    {
        printf("Negative number detected.\n");
        break;

    }
    sum += num;
    }




return 0;
}
