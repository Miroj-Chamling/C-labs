#include<stdio.h>
#include<conio.h>

float add(float, int);
float mul(float, int);
float diff(float, int);
void main()
{
    float a, c,d,e,f;
    int b;
    printf("enter two numbers : ");
    scanf("%f%d", &a,&b);
    c = add(a,b);
    d = mul(a,b);
    e = diff(a,b);
    printf("the sum is %.2f \n" , c);
    printf("the product is %.2f \n", d);
    printf("the difference is %.2f \n", e);
    getch();
}

float adds(float x, int y)
{
    float z;
    z = x +y;
    return z;
}
float mul(float x, int y)
{
    float z;
    z = x *y;
    return z;
}
float diff(float x, int y)
{
    float z;
    z = x - y;
    return z;
}

