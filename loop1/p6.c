#include <stdio.h>
void main()
{
   int i,n,sum=0;

   printf("Input number: ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     printf("%d ",2*i-1);
     sum+=2*i-1;
   }
   printf("\nThe Sum of odd Natural Number upto %d terms : %d \n",n,sum);
}
