#include<stdio.h>
int main()
{
    int n;
    printf("input no of terms :");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        printf("no :%d and cube of a %d : %d \n",i,i, (i*i*i));
    }
    return 0;
}