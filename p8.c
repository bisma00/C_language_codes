/*
program for
1
12
123
1234
12345

*/

#include<stdio.h>
int main()
{
    int n;
    printf("enter a size");
    scanf("%d",&n);
    for(int r=1; r<=n; r++)
    {
        for(int c=1; c<=r; c++)
        {                                                   
            printf("%d",c);                               
        }
        printf("\n");
    }
    return 0;
}