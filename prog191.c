#include<stdio.h>
int isarmstrong(int);
int main()
{
	int n;
	printf("Enter any natural number:");
	scanf("%i",&n);
	if(isarmstrong(n))
		printf("Armstrong number");
	else
		printf("Not an armstrong number");
	return 0;
}
int isarmstrong(int n)
{
	int temp,sum;
	for(temp=n,sum=0;n!=0;n=n/10)
		sum=sum+(n%10)*(n%10)*(n%10);
	return sum==temp;
}
