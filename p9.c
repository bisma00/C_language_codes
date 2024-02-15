/*
program for
1
22
333
4444
55555
*/

#include <stdio.h>
int main()
{
   int rows;

   printf("Input number of rows : ");
   scanf("%d",&rows);
   for(int r=1;r<=rows;r++)
   {
	for(int c=1;c<=r;c++)
	   printf("%d",r);
	printf("\n");
   }
}