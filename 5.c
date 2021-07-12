#include<stdio.h>
#include<string.h>


struct library{
char bookid[20], title[40], authname[40];
int price;
};


int main(){
    struct library info[20];
    int i=0,n=0;
    char choice,ch;
    int j;
    char temp[30], temp1[30], temp2[30];
    int tem;
    char name[30];
    char id[10];



    printf("\na. To add the book to the library.");
    printf("\nb. To display all the informations of the book");
    printf("\nc. List all the books of the given author");
    printf("\nd. Counts of all the book in the library");
    printf("\ne. List the information of the book according to the book id");
    printf("\nf. Exit");
    printf("\n");
do{
    printf("\nenter your choice: ");
    fflush(stdin);
    scanf("%c",&choice);
    switch(choice){
case 'a':
    printf("\nbook id: ");
    fflush(stdin);
    gets(info[i].bookid);
    printf("author of the book: ");
    fflush(stdin);
    gets(info[i].authname);
    printf("title of the book: ");
    fflush(stdin);
    gets(info[i].title);
    printf("price:");
    scanf("%d", &info[i].price);
    i++;
    n++;
    break;

case 'b':
    for(i=0; i<=n; i++){
        for(j = i+1; j<n; j++){
            if(strcmp(info[i].title,info[j].title)>0){

                strcpy(temp,info[i].title);
                strcpy(info[i].title,info[j].title);
                strcpy(info[j].title,temp);

                strcpy(temp1,info[i].authname);
                strcpy(info[i].authname,info[j].authname);
                strcpy(info[j].authname,temp1);

                strcpy(temp2,info[i].bookid);
                strcpy(info[i].bookid,info[j].bookid);
                strcpy(info[j].bookid,temp2);

                tem = info[i].price;
                info[i].price = info[j].price;
                info[j].price = tem;
            }
        }
    }
    printf("bookid \t\tauthor\t\ttitle\t\tprice\n");
         for(i=0; i<n; i++){
                printf("%s\t\t%s\t\t%s\t\t%d", info[i].bookid, info[i].authname, info[i].title, info[i].price);
                printf("\n");
    }
    break;

case 'c':

    printf("enter the name of the author: ");
    fflush(stdin);
    gets(name);
    printf("the books written by the given author are: \n");
    for(i=0;i<n; i++){
            if(strcmp(info[i].authname,name)==0){
        printf("%s", info[i].title);
    }
    }
    break;

case'd':
    printf("the total counts of book in the library is %d", n);
    break;


case 'e':

    printf("enter the book id: ");
    scanf("%s", &id);
    printf("bookid \t\tauthor\t\ttitle\t\tprice\n");
    for(i=0; i<n; i++){
        if(strcmp(info[i].bookid,id)==0){
            printf("%s\t\t%s\t\t%s\t\t%d", info[i].bookid, info[i].authname, info[i].title, info[i].price);
        }
    }
    break;
default:
    printf("\ninvalid choice");
    }
printf("\ndo you want to continue?(y/n)");
fflush(stdin);
scanf("%c",&ch);
} while(ch=='y'||ch=='Y');
}
