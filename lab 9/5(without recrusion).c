#include<stdio.h>

int sum();

void main()
{
    int n,c;
    printf("enter the number : ");
    scanf("%d", &n);
    c = sum(n);
    printf("the sum is %d", c);
}

int sum(int x)
{
    int s = 0,r;
    while(x != 0)
    {
        r = x%10;
        s = s+ r;
        x = x/10;
    }
    return s;
}
