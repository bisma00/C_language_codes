#include <stdio.h>
int main()
{       
    int i,n,sum=0;
	float avg;
	for (i=1;i<=10;i++)
	{
                printf("Number :",i);

		scanf("%d",&n);
		sum +=n;
	}
	avg=sum/10.0;
	printf("The sum of 10 no is : %d\nThe Average is : %f\n",sum,avg);
 
}


/*
sum of no and their avg
*/