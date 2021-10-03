//count the vowel in the string and remove it
#include<stdio.h>
#include<string.h>

void main()
{
    char str[100], str1[100];
    int i, count = 0,j, tmp;

    printf("enter the string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'|str[i]=='u')
        {
            count++;
        }
    }
    for(i=0; str[i] != '\0' ; i++)
    {
        for(j= i +1; str[j] != '\0' ; j++)
        {
           if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'|str[i]=='u')
            {
                tmp = str[i];
                str[i] = str[j];
                str[j] = tmp;
            }
        }
    }
    printf("\ntotal vowel in the string is: %d", count);
    printf("\nthe string after the deletion of vowel is : %s", str);
}
