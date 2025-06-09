#include<stdio.h>

int main()
{
    int a, b, space;
    int n = 4;

    for (a = 1; a <= n; a++)
    {
        for (space = 1; space <= n - a; space++)
        {
            printf(" ");
        }
        for (b = 1; b <= 2 * a - 1; b++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
