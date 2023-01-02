#include<stdio.h>
int factorial(int);
int main()
{
	int n;
	printf("Enter any natural number:");
	scanf("%i",&n);
	printf("Factorial %i",factorial(n));
	return 0;
}
int factorial(int n)
{
	int f,i;
	for(f=1,i=1;i<=n;i++)
		f=f*i;
	return f;
}

