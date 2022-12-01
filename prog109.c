#include<stdio.h>
int main()
{
	int i,n,sum;
	
	printf("Enter the limit:");
	scanf("%i",&n);
	
	
	for(sum=0,i=1;i<=n;i++)
		sum=sum+i;
	
	printf("Sum of all the natural numbers %i",sum);
	return 0;
}
