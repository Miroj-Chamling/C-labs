#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct student{
int math, sci, phy, eng, chem ,roll;
char name[20];
};

int main()
{
    struct student *info, *info1;
    int n;
    printf("enter the number of students:");
    scanf("%d", &n);
    info = (struct student*) malloc(sizeof(struct student)*n);
    info1 = info;
    printf("\nenter the info of the students:\n");
    for(int i=0; i<n; i++)
    {
        printf("\nfor student %d", i+1);
        printf("\nenter the name: ");
        fflush(stdin);
        gets(info->name);
        printf("enter the roll number:");
        scanf("%d", &info->roll);
        printf("mark of math: ");
        scanf("%d", &info->math);
        printf("mark of science: ");
        scanf("%d", &info->sci);
        printf("mark of physics: ");
        scanf("%d", &info->phy);
        printf("mark of english: ");
        scanf("%d", &info->eng);
        printf("mark of chemistry: ");
        scanf("%d", &info->chem);
        info++;
    }
    printf("\nThe information of the students:\n ");
    printf("\nrollno\tname\tmath\tsci\tphy\teng\tchem");
    printf("\n---------------------------------------------------------\n");
    for(int i=0; i<n; i++)
    {
        printf("%d\t%s\t%d\t%d\t%d\t%d\t%d", info1->roll,info1->name, info1->math, info1->sci, info1->phy, info1->eng, info1->chem);
        printf("\n");
        info1++;
    }
}
