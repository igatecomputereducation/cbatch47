#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter value into a:");
	scanf("%i",&a);
	printf("Enter value into b:");
	scanf("%i",&b);
	b=a+b-(a=b);
	printf("Value of a %i\n",a);
	printf("Value of b %i",b);
	return 0;
}
