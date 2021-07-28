#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

void main()
{
    char name[100];
    int i, len,temp;

    printf("enter your full name : ");
    gets(name);

    len = strlen(name);
    printf("%c.", toupper(name[0]));

    for(i = 0; i<len ; i++)
    {
        if(name[i]==' ')
        {
            temp = i;
        }
    }
    for(i = 0; i <temp; i++)
    {
        if(name[i] == ' ')
        {
            printf("%c.", toupper(name[i+1]));
        }
    }
    for(i = temp+1; i< len; i++)
    {

        printf("%c", toupper(name[i]));
    }

}

