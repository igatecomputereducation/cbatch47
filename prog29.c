#include<stdio.h>
int main()
{
	int num;
	printf("Enter any integer:");
	scanf("%i",&num);
	if(num>0)
		printf("Positive");
	if(num<0)
		printf("Negative");
	if(num==0)
		printf("Zero");
	return 0;
}
