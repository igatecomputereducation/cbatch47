#include<stdio.h>
int factorial(int);
int main()
{
	int n,temp,sum;
	printf("Enter any natural number:");
	scanf("%i",&n);
	for(temp=n,sum=0;n!=0;n=n/10)
		sum=sum+factorial(n%10);
	if(sum==temp)
		printf("Strong number");
	else
		printf("Not a strong number");
	return 0;
}
int factorial(int n)
{
	int f,i;
	for(f=1,i=1;i<=n;i++)
		f=f*i;
	return f;
}

