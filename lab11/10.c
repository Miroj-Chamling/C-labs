#include<stdio.h>
#include<conio.h>

int main(){
 FILE *fp;
 char name[30], age[10];
  fp = fopen("student.txt", "w");
  printf("enter name");
  gets(name);
  printf("enter age");
  gets(age);
    fprintf(fp,"%s\n%s", name,age);
    fclose(fp);
fp = fopen("student.txt", "r");
fscanf(fp,"%s\n%s", name,age);
printf("\n%s\n%s", name,age);


}
