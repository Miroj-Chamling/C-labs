#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void main()
{
    FILE *fp, *fp1, *fp2;
    char ch;
    fp = fopen("main.txt", "w");
    printf("write the sentence: ");
    while((ch=getchar())!= EOF)
    {
        putc(ch,fp);
    }
    fclose(fp);
    fp = fopen("main.txt", "r");
    fp1 = fopen("upper.txt", "w");
    fp2 = fopen("lower.txt", "w");
    while((ch=fgetc(fp))!=EOF)
    {
        ch = toupper(ch);
        putc(ch,fp1);
        ch = tolower(ch);
        putc(ch,fp2);
    }
    printf("task completed");
    fclose(fp);
    fclose(fp1);
    fclose(fp2);

}

