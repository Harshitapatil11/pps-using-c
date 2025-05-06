include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the number1\t");
    scanf("%d", &a);

    printf("Enter the number2\t");
    scanf("%d", &b);

    printf("Before Swapping : a=%d b=%d\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("After Swapping : a=%d b=%d\n", a, b);

    return 0;
}
