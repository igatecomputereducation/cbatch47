#include<stdio.h>
int main()
{
	int a[50],i,n;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	for(i=n-1;i>=0;i--)
		printf("%5i",a[i]);
	
	return 0;
}
