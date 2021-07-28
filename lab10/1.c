#include<stdio.h>

struct student{
    char name[50], department[50], course[50];
    int roll, dj;
};

void main()
{
    struct student std[450];
    int n,i,d,r;
    printf("enter the number of students : ");
    scanf("%d", &n);
    if (n<=450)
    {
        for (i =1; i<= n;i++)
        {
            printf("\nenter the name of the sutdent : ");
            scanf("%s", &std[i].name);
            printf("enter the department : ");
            scanf("%s", &std[i].department);
            printf("enter the course : ");
            scanf("%s", &std[i].course);
            printf("enter the roll no : ");
            scanf("%d", &std[i].roll);
            fflush(stdin);
            printf("joining year : ");
            scanf("%d", &std[i].dj);
            printf("\n");
        }
        printf("enter the date: \n");
        scanf("%d",&d);
        printf("Students joining on the given year: \n");
        printf("Name\t\tRoll no.\t\tDepartment\t\tCourse\t\t Date of Join\n");
        for(i =1; i<=n; i++)
        {
            if (std[i].dj == d)
            {
                 printf("%s\t\t%d\t\t\t%s\t\t\t%s\t\t\t%d", std[i].name, std[i].roll,std[i].department,std[i].course, std[i].dj);
            }
        }
        printf("\n");
        printf("enter the roll number: ");
        scanf("%d", &r);
        printf("Name\t\tRoll no.\t\tDepartment\t\tCourse\t\t Date of Join\n");
        for(i=1; i<=n ;i++)
        {
        if(std[i].roll==r)
        {
            printf("%s\t\t%d\t\t\t%s\t\t\t%s\t\t\t%d", std[i].name, std[i].roll,std[i].department,std[i].course, std[i].dj);
        }
    }
}
else
{
    printf("\ninvalid choice");
}
}
