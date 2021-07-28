#include<stdio.h>

int main()
{
    int n,sum =0;
    printf("how many numbers :");
    scanf("%d", &n);
    int arr[n];
    printf("enter the numbers :");
    for(int i = 0; i<n; i++)
    {
        scanf("%d", (arr+i));
        printf("number[%d]= memory location [%u] \n",  *(arr+i),(arr+i));
    }
    for (int i=0; i<n;i++)
    {
        sum+= *(arr+i);
    }
    int avg = sum/n;
    printf("sum is %d \n", sum);
    printf("average is %d", avg);
}
