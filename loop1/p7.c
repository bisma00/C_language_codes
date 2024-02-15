#include<stdio.h>
int main()
{
    int size;
    printf("enter a size");
    scanf("%d",&size);
    for(int row=1; row<=size; row++)
    {
        for(int col=1; col<=row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
return 0;
}