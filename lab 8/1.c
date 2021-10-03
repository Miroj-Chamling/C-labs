//wap to check palindrome or not
#include<stdio.h>
#include<string.h>

void main()
{
    char str1[100] , str2[100];
    printf("enter the string : ");
    gets(str1);
    strcpy(str2, str1);
    str1[100] = strrev(str1);
    if(strcmp(str1,str2)==0)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
}
