#include<stdio.h>

int PrintArray(int arr[], int size);

int main()
{
    int a[3] = {3,4,5};
    int b[4] = {1,2,9,14};
    int d[7] = {1,2,3,4,5,6,8};
    PrintArray(a,3);
    printf("\n");
    PrintArray(b,4);
    printf("\n");
    PrintArray(d,7);
    return 0;
}

int PrintArray(int arr[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
}
