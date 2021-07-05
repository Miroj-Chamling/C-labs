#include<stdio.h>

struct client{
char name[100];
long int accno, balance;
};

void main()
{
    int n, i;
    char choice;
    long int num, damount,wamount;
    struct client info[250];
    printf("enter no of clients: ");
    scanf("%d",& n);
    if (n<= 250)
    {
        for(i=1; i<=n; i++)
        {
            printf("name of client: ");
            fflush(stdin);
            gets(info[i].name);
            printf("account no: ");
            scanf("%ld",& info[i].accno);
            printf("balance : ");
            scanf("%ld", &info[i].balance);

        }
        printf("list of clients with balance less than 1000: \n");
        for(i=1; i<=n;i++)
        {
            if(info[i].balance<1000)
            {
                printf("account no: %ld\n", info[i].accno);
                 puts(info[i].name);
            }
        }

        //for deposit or withdrawal
        printf("\nfor deposit or withdrawal: ");
        printf("enter the account number: ");
        scanf("%ld", &num);
        for(i=0; i<=n; i++)
        {
            if(num==info[i].accno)
            {
                fflush(stdin);
                printf("withdrawal or deposit?(d,w):");
                printf("d for deposit and w for withdrawal:");
                scanf("%c",&choice);
                switch(choice){
            case 'd':
                printf("deposit amount: ");
                scanf("%d",&damount);
                info[i].balance += damount;
                printf("new balance: %d", info[i].balance);
                break;

            case 'w':
            printf("withdraw amount: ");
            scanf("%d", &wamount);
            if(wamount>info[i].balance){
                printf("operation failed!");
            }
            else{
                info[i].balance -= wamount;
                printf("current balance: %d", info[i].balance);
            }
            break;
            default:
                printf("invalid choice");
                }
            }
        }

    }
    else{
        printf("invalid entries");
    }


}
