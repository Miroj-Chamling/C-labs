#include<stdio.h>

void main()
{
 char name[255];
 int i, n;

 printf("enter the number of students: ");
 scnaf("%d", &n);
 for (i = 0; i != n ; i++)
 {
     printf("enter the string: ");
     gets(name);
 }
}
