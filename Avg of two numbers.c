#include <stdio.h>
int main()
{
    int num1,num2,div;
    printf("Enter first number ");
    scanf("%d",&num1);
    printf("Enter second number");
    scanf("%d",&num2);
    div=num1 & num2;
    printf("The avg of %d and %dis %d ",num1,num2,div);
    return 0;

}
