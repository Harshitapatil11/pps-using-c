#include <stdio.h>

int main() 
{
    int num, total = 0;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    while (num > 0) 
    {
        total += num % 10;
        num /= 10;
    }

    printf("The sum of 3 digits entered is %d\n", total);

    return 0;
}
