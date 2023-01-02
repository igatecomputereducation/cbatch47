#include<stdio.h>
int getsum(int[],int);
int main()
{
	int a[50],n,i;
	printf("How many elements:");
	scanf("%i",&n);
	printf("Enter the elements..\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	printf("Sum of all the elements %i",getsum(a,n));
	return 0;
}
int getsum(int x[],int n)
{
	int sum,i;
	for(sum=0,i=0;i<n;i++)
		sum=sum+x[i];
	return sum;
}

