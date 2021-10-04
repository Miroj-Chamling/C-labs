#include<stdio.h>
#include<malloc.h>

int main()
{
    int *mark, *result;
    int n;
    printf("enter the number of students : ");
    scanf("%d", &n);
    mark = (int*)malloc(sizeof (int)*n);
    result = mark;
    printf("enter the mark of the students: ");
    for(int i = 0; i<n; i++)
    {
        scanf("%d", mark);
        mark += 1;
    }
    for(int i =0; i<n; i++)
    {
        printf("memory[%u] = %d \t",result, *result);
        result+= 1;
    }
}


