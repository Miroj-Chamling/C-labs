#include<stdio.h>
#include<conio.h>
#define SIZE 100
void main()
{
float a[SIZE],sum=0,avg;
int n,i;
clrscr();
printf("How many numbers?");
scanf("%d",&n);
printf("Enter numbers:\n");
for(i=0;i<n;i++)
{
scanf("%f",(a+i)); // scanf("%f",&a[i]);
sum=sum+*(a+i); //sum=sum+a[i];
}
avg=sum/n;
printf("Sum=%f\n",sum);
printf("Average=%f",avg);
getch();
}
