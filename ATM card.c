#include<stdio.h>

int main()
{
    int num, i = 1;
    for (i = 1; i <= 3; i++)
    {
        printf("\nEnter the pin: \t");
        scanf("%d", &num);
        if (num == 2006)
        {
            printf("\nPlease collect your cash");
            break;
        }
        else if (i == 3)
        {
            printf("\nyour card is blocked");
        }
        else
        {
            printf("Incorrect password");
        }
    }
    return 0;
}
