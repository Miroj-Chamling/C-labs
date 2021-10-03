//count the length of the string

#include<stdio.h>

void main()
{
    char str[100];
    int i=0, count=0;
    printf("enter a string: ");
    gets(str);

    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    printf("total letters in string is: %d", count);
}
