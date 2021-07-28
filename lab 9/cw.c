#include<stdio.h>
void mult(int);

void main()
{
    int n ;
    printf("enter the number :");
    scanf("%d", &n);
    c = mult(n);
}
void mult(int x)
{
    int i;
    for(i = 1; i<= 10; i++)
    {
        printf("%d * %d = %d \n", x, i , x*i);
    }
}
