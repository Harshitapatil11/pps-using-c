#include <stdio.h>

int main() 
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    if (number > 3) 
{
        printf("greater\n");
    } else {
        printf("smaller\n");
    }
    return 0;
}
