include <stdio.h>

int main() 
{
    
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 10 == 0) 
    {
        printf("The entered number %d is divisible by 10.\n", num);
    } 
    
    {
        printf("The entered number %d is not divisible by 10.\n", num);
    
    return 0;
    }
}
