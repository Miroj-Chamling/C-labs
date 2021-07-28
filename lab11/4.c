//WAP to enter N numbers to store in the data file. Read the numbers from that file and store odd number
//in one file and even in another file. Display all the contents of files.

#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp, *fp1, *fp2;
    int n, num;
    fp = fopen("mainnumber.txt", "w");
    printf("how many numbers: ");
    scanf("%d", &n);
    printf("Enter the numbers: \n");
    for(int i=0 ;i<n; i++)
    {
        scanf("%d", &num);
        putw(num, fp);
    }
    fclose(fp);
    fp = fopen("mainnumber.txt", "r");
    fp1 = fopen("evennumber.txt", "w");
    fp2 = fopen("oddnumber.txt", "w");
    while((num=getw(fp))!=EOF)
    {
     if(num%2 == 0)
     {
         putw(num, fp1);
     }
     else
     {
         putw(num,fp2);
     }
    }
    printf("\ntask completed");
    fclose(fp);
    fclose(fp1);
    fclose(fp2);

    fp1= fopen("evennumber.txt","r");
    fp2 = fopen("oddnumber.txt", "r");
    printf("\neven numbers: \n");
    while((num=getw(fp1))!=EOF)
    {
        printf("%d\t", num);
    }
    printf("\nodd numbers: \n");
    while((num=getw(fp2))!=EOF)
    {
        printf("%d\t", num);
    }
    fclose(fp1);
    fclose(fp2);
}
