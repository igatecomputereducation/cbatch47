#include<stdio.h>
int main()
{
	int n,sum;
	
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	rev=0;
	while(n!=0)
	{
		rev=rev*10+n%10;
		n=n/10;
	}
	
	printf("reverse number %i",rev);
	return 0;
}
