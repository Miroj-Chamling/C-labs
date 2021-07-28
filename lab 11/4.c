//WAP to enter N different numbers and display their number with memory with suitable format and find their sum also. [using malloc function]


#include<stdio.h>
#include<malloc.h>

int main()
{
    int *num, *result;
    int n,sum=0;
    printf("how many numbers :");
    scanf("%d", &n);
    num = (int*)malloc(sizeof(int)*n);
    result = num;
    printf("enter the numbers : \n");
    for(int i = 0; i<n ;i++)
    {
        scanf("%d", num);
        num += 1;
    }
    printf("\nthe numbers are : \n");
    for(int i = 0; i<n ;i++)
    {
        printf("memory[%u] = %d \n",result, *result);
        sum += *result;
        result += 1;
    }

    printf("\nsum is %d", sum);

}
