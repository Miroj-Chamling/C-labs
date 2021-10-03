//sorting the strings in alphabetical order
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char name[100][100], temp[100];
    int i,n,j,r;
    printf("enter the number of students : ");
    scanf("%d", &n);
    printf("enter the names of the students :\n");
    for(i=0; i<= n; i++)
    {
        gets(name[i]);
        strupr(name[i]);
    }


    for(i=0; i<= n; i++)
    {
        for(j = i+1; j<=n; j++)
        {
            if(strcmp(name[i], name[j])>=0 )
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    printf("\n");
    printf("the names in the sorted order are: ");
    for(i=0; i<=n; i++)
    {
       puts(name[i]);
    }
}
