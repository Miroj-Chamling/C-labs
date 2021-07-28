#include<stdio.h>

int main()
{
    int n;
    printf("how many numbers : ");
    scanf("%d", &n);
    int arr[50];
    printf("enter the numbers: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int *ptr;
    ptr = &arr[0];
    printf("\nArray\t\tMemory location\tvalue");
    printf("\n------------------------------------------\n");
    for(int i=0; i<n ; i++)
    {
        printf("a[%d]\t\t%u\t\t%d\n", i, ptr+i, *(ptr+i));

    }
}
