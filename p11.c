/*
print
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5  
   */

#include<stdio.h>
int main()
{
    int n,spc;
    printf("enter a no");
    scanf("%d",&n);
    spc=n+4-1;
    for(int r=1; r<=n; r++)
    {
        for(int k=spc; k>=1; k--)
        {
            printf(" ");
        }
        for(int c=1; c<=r; c++)
            printf("%d ",c);
      printf("\n");
    spc--;
    }
    return 0;
}