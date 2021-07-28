#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0;i <n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int *ptr;
    ptr = &arr[0];
    int sum = 0;
    for(int i=0; i<n ;i++)
    {
         printf("%d\n",*(ptr +i) ) ;
    }
    printf("\n");
    printf("%d", sum);
}
