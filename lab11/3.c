#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    int n, num;
    fp = fopen("numbers.txt", "w");
    printf("how many numbers: ");
    scanf("%d", &n);
    printf("enter the numbers: ");
    for(int i=0; i<n;i++)
    {
        scanf("%d",&num);
        putw(num,fp);
    }
    fclose(fp);
    printf("the entered numbers are: \n");
    fp = fopen("numbers.txt", "r");
    while((num=getw(fp))!=EOF)
    {
        printf("%d\n",num);
    }
}
