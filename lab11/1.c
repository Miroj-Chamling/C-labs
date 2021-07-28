#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
      FILE *fp1, *fp2, *fp3;
      char ch, ch_l;

      fp1 = fopen("main.txt", "w");

      printf("Enter string: ");
      while((ch=getchar())!=EOF)
      {
          putc(ch,fp1);
      }

      fclose(fp1);

      fp1 = fopen("main.txt", "r");
      fp2 = fopen("upper.txt", "w");
      fp3 = fopen("lower.txt", "w");

      while((ch=getc(fp1))!=EOF)
      {
            ch = toupper(ch);
            putc(ch,fp2);

            ch_l = tolower(ch);
            putc(ch_l,fp3);
      }

      printf("\nCase converted successfully..\n");

      fclose(fp3);
      fclose(fp2);
      fclose(fp1);

}
