#include<stdio.h>
int main()
{
	int a[50],i,n,temp;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
	
	printf("The result array\n");
	for(i=0;i<n;i++)
		printf("%5i",a[i]);
	return 0;
}
