/*
program to print right arrow star pattern
*/



#include<stdio.h>
int main()
{
    int rows;
    printf("enterr row:");
    scanf("%d",&rows);
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=rows; j++)
        {
            if(j<i)
            printf(" ");
            else
            printf("*");
        }
        printf("\n");
    }
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=rows; j++)
    {
        if(j<rows-i)
        printf(" ");
        else
        printf("*");
    }
    printf("\n");
    }
    return 0;
}
