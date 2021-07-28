#include<stdio.h>

int sum(int);

void main()
{
    int n,c;
    printf("enter the number : ");
    scanf("%d", &n);
    sum(n);
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
   printf("the sum of the individual digit is %d", s);
}
