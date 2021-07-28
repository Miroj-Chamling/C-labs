#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char string[100];
    int i =0, j = 0;

    printf("enter the string : ");
    gets(string);

    for(i = 0; string[i] != '\0' ; i++)
    {
        if(string[i] >='A' && string[i] <= 'Z' || string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] = string[i] +1;
        }
    }
    printf("the required output is : ");
    puts(string);
}

