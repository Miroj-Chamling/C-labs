#include<stdio.h>

int fact(int);

void main()
{
    int n,f;
    printf("enter the number : ");
    scanf("%d", &n);

    f = fact(n);
    printf("the factorial of the given number is %d", f);
}

int fact(int x)
{
    int z =1, i;
    for(i =1; i<= x ; i++)
    {
        z *= i;
    }
    return z;

}
