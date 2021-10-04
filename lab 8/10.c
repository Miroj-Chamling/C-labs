//turning a word post into dak
#include<stdio.h>
#include<conio.h>

int main(){
    char sent[100];
    int i =0, j;
    printf("enter the sentence: ");
    fflush(stdin);
    gets(sent);
    while(sent[i] != '\0'){
        if(sent[i] == 'p' && sent[i+1] == 'o' && sent[i+2] == 's' && sent[i+3] == 't' ){
            sent[i] = 'd';
            sent[i+1] = 'a';
            sent[i+2] = 'k';
            j = i+3;
        }
        i++;
    }
    while(sent[j]!= '\0'){
        sent[j] = sent[j+1];
        j++;
    }
    puts(sent);
    getch();
}
