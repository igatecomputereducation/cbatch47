#include<stdio.h>
int main()
{
	int n,i,sum;
	
	printf("Enter the limit:");
	scanf("%i",&n);
	
	sum=0;
	i=1;
	do{
		sum=sum+i;
		i=i+1;
	}while(i<=n);
	
	printf("Sum of natural numbers %i",sum);	
	return 0;
}
