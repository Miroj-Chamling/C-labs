#include <string.h>

void main()
{
    char str[100],search;
    int i,count=0;
s
    printf("Enter  the string : ");
    gets(str);
    printf("Enter character to be searched: ");
    search= getchar();
    search = tolower(search);
    for(i=0;str[i];i++)
    {
    	if(str[i]==search)
    	{
          count++;
		}
 	}

	printf("character '%c' occurs %d times \n ",search,count);

}
