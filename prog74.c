#include<stdio.h>
int main()
{
	int n;
	printf("Enter an integer:");
	scanf("%i",&n);
	(n==0)?printf("Zero"):((n%2==0)?printf("Even"):printf("Odd"));
	return 0;
}
