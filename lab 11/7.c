#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct student
{
    int roll;
    char name[20], address[20];

};

int main()
{
    struct student *info, *info1;
    int n;
    printf("Enter the number of students :");
    scanf("%d", &n);
    info = (struct student*) malloc(sizeof(struct student)*n);
    info1 = info;
    printf("enter the info of the sutdents :\n");
    for(int i=0; i<n;i++)
    {
        printf("\nenter the roll number :");
        scanf("%d", &info->roll);
        printf("enter the name: ");
        fflush(stdin);
        gets(info->name);
        printf("enter the address :");
        fflush(stdin);
        gets(info->address);
        info++;
    }

    printf("\nInfo of the sutdents :");
    printf("\nRollno \tName \tAddress");
    printf("\n--------------------------------\n");
    for(int i = 0; i<n; i++)
    {
        printf("%d\t%s\t%s", info1->roll,info1->name,info1->address);
        printf("\n");
        info1++;
    }
}
