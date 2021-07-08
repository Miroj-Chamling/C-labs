#include<stdio.h>

struct engine{
char serial[100], material[100];
int yom, qty;
};

void main()
{
    int n,i,f,l;
    char snum[100], lnum[100];
    struct engine info[100];
    printf("enter the number of engnies");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("\nfor engine no. %d", i);
        printf("\nengine serial number: ");
        fflush(stdin);
        scanf("%s", info[i].serial);
        printf("material: ");
        scanf("%s", info[i].material);
        printf("year of manufacture: ");
        scanf("%d", &info[i].yom);
        printf("quantity: ");
        scanf("%d", &info[i].qty);
        printf("\n");
    }

    //stored information of the engines
    printf("\nthe informations of the engines are: ");
    printf("\nSerial no \t\t|material \t\t\t| Year of Manufacture \t\t|quantity");
    for(i=1; i<=n ;i++)
    {
        printf("\n%s\t\t\t%s \t\t\t\t%d \t\t\t\t%d", info[i].serial,info[i].material, info[i].yom,info[i].qty);
    }
*/
    //to retrieve the information of the given parts


    printf("\n");

    printf("\nStarting Serial number: ");
    scanf("%s", snum);
    printf("\nEnding Serial number: ");
    scanf("%s", lnum);
     for(i=1; i<=n; i++)
    {
    if(strcmp(snum,info[i].serial) == 0)
    {
        f = i;
    }

    if(strcmp(lnum,info[i].serial) == 0)
    {
        l = i;
    }
    }
     printf("\nSerial no \t\t|material \t\t\t| Year of Manufacture \t\t|quantity");
    for(i=f;i<=l;i++)
    {
          {
              printf("\n%s\t\t\t%s \t\t\t\t%d \t\t\t\t%d", info[i].serial,info[i].material, info[i].yom,info[i].qty);
          }
          printf("\n");
    }
}
