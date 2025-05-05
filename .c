#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i <= 10; i++)
    {
        if (i == 3)
        {
            break; // or continue;
        }
        printf("%d\n", i);
    }
    printf("End");
    return 0;
}
