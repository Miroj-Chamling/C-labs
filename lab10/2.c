#include<stdio.h>

struct client{
char name[100];
long int accno, balance;
};

void main()
{
    int i,n,ch1;
    long int acc, damt,wamt;
    char ch,ch2,ch3;
    struct client info[250];
    printf("enter the number of clients: ");
    scanf("%d",&n);
    if(n<250)
    {
    for(i=0; i<n; i++)
    {
        printf("\nname of client: ");
        scanf("%s",& info[i].name);
        fflush(stdin);
        printf("Acc no: ");
        scanf("%ld",&info[i].accno);
        printf("Balance: ");
        scanf("%ld", &info[i].balance);
    }
    //to display the info of clients with balance less than thousand
    do{
    printf("enter your choice: (a/b)");
    printf("\na. For info of clients with balance less than 1000 \nb. For withdrawing or depositing the money\n");
    fflush(stdin);
    scanf("%c",&ch);
    switch(ch){
case 'a':
    printf("\nThe info of clients with balance less than 1000:\n ");
    for(i=0; i<n; i++)
    {
        if(info[i].balance < 1000)
        {
            printf("\nname : %s  \t Acc no: %d", info[i].name, info[i].balance);
        }
    }
    break;
case 'b':
    printf("\nenter your account number: ");
    scanf("%ld", &acc);
    for(i=0; i<n; i++)
    {
        if(acc == info[i].accno)
        {
            printf("\nenter Your choice (1/0): ");
            printf("\n1. For deposit \n0. Fow withdrawal\n");
            fflush(stdin);
            scanf("%d", &ch1);
            switch(ch1){
case 1:
    printf("\nenter the amount you want to deposit: ");
    scanf("%ld", &damt);
    info[i].balance += damt;
    printf("\nDeposited successfully! Your new balance is %ld", info[i].balance);
    break;
case 0:
    printf("\nenter the amount you want to withdraw: ");
    scanf("%ld", &wamt);
    if(info[i].balance < wamt){
        printf("\nOperation failed! Inscufficient balance.");
    }
    else{
        info[i].balance -= wamt;
        printf("\nWithdrawan Successfully! Your new balance is %ld", info[i].balance);
    }
     break;
default:
    printf("\nInvalid choice");
            }
        }
        else{
            printf("\nInvalid account number");
        }
    }
    break;
default:
    printf("\nInvalid choice");
    }
printf("\nDo you want to continue?(Y/N): ");
fflush(stdin);
scanf("%c",&ch2);
}
while(ch2 == 'Y' || ch2=='y');
    }

 else
 {
     printf("Invalid choice");
 }
}
