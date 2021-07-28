#include<stdio.h>
#include<conio.h>

int fab (int);
void main()
{
    int n,i,b;
    printf("enter the number : ");
    scanf("%d", &n);
    for (i =0; i<= n ;i++)
    {
     b = fab(i);
     printf("%d\t", b);
    }
    getch();
}

int fab(int n)
{
    if(n == 0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fab(n-1)+fab(n-2);

}
