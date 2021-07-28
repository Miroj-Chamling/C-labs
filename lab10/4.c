#include<stdio.h>
#include<string.h>
#include<ctype.h>
struct player{
char name[20];
int age, mp, ar;
};

void main()
{
    int i,j,temp,temp1, temp2,n=2;
    char chtemp[20];
    struct player info[10];
    for(i=0; i<n; i++)
    {
        printf("for player number %d \n", i+1);
        printf("enter the name: ");
        scanf("%s", info[i].name);
        printf("age: ");
        scanf("%d",&info[i].age);
        printf("matches played: ");
        scanf("%d",  &info[i].mp);
        printf("average runs: ");
        scanf("%d", & info[i].ar);
        printf("\n");
    }
   printf("\nthe informations of the players are: ");
    printf("\nname \t\tage \t\t\tmatch played \t\tavg runs");
    for(i=0; i<n ;i++)
    {
        printf("\n%s\t\t%d \t\t\t%d \t\t\t%d", info[i].name,info[i].age, info[i].mp,info[i].ar);
    }

//sorted order
printf("\n");
printf("\nsorted oeder by the average runs:");
for(i=0;i<=n;i++)
{
    for(j=i+1; j<n; j++)
    {
        if(info[i].ar>info[j].ar)
        {

            temp = info[i].ar;
            info[i].ar = info[j].ar;
            info[j].ar = temp;

            temp1 = info[i].age;
            info[i].age = info[j].age;
            info[j].age= temp1;

            temp2 = info[i].mp;
            info[i].mp = info[j].mp;
            info[j].mp = temp2;


            strcpy(chtemp,info[i].name);
            strcpy(info[i].name,info[j].name);
            strcpy(info[j].name,chtemp);

        }
    }
}
 printf("\ninformations sorted according to average runs: ");
    printf("\nname \t\tage \t\t\tmatch played \t\tavg runs");
    for(i=0; i<n ;i++)
    {
        printf("\n%s\t\t%d \t\t\t%d \t\t\t%d", info[i].name,info[i].age, info[i].mp,info[i].ar);
    }

}


