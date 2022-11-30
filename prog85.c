#include<stdio.h>
int main()
{
	int i,n,fact;
	
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	fact=1;
	i=1;
	abc:
		fact=fact*i;
		i=i+1;
	if(i<=n)
		goto abc;
	
	printf("Factorial %i",fact);
	return 0;
}
