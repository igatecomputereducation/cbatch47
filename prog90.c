#include<stdio.h>
int main()
{
	int n,i,fact;
	
	printf("Enter the natural number:");
	scanf("%i",&n);
	
	fact=1;
	i=1;
	do{
		fact=fact*i;
		i=i+1;
	}while(i<=n);
	
	printf("Factorial %i",fact);		
	return 0;
}
