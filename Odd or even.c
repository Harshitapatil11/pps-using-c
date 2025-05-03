#include<stdio.h>
int main ()
{
    int num,rem;
    printf("enter number:\t");
    scanf("%d",&num);
    rem=num%2;
    if (rem==0)
    {
        printf("The entered number %d is even",num);
    }
    else
    {
        printf("The entered num%d is ODD",num);
    }
    return 0;
}
