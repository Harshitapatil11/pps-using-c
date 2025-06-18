#include<stdio.h>
int main()
{
    float salary, sum, c, d;
    printf("Enter the basic salary: ");
    scanf("%f", &salary);
    c = 0.4 * salary;
    d = 0.2 * salary;
    sum = salary + c + d;
    printf("The gross salary of Ramesh is: %f", sum);
    return 0;
}
