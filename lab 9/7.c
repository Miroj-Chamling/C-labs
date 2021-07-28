#include<stdio.h>

int palin(int);

void main()
{
    int n,i;
    for(i = 0; i<= 5; i++)
    {
          printf("enter the number: ");
    scanf("%d", &n);
    palin(n);
    printf("\n");
    }
}


int palin(int x)
{
    int r, rev = 0, org =x;
    while(x != 0)
    {
        r = x%10;
        rev = rev * 10 + r;
        x = x/10;
    }
    if(rev == org)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
}
