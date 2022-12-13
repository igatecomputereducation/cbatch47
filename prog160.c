#include<stdio.h>
int main()
{
	int a[50],i,n,min;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	for(min=a[0],i=1;i<n;i++)
	{
		if(a[i]<min)
			min=a[i];
	}

	printf("Minimum element %i",min);
	return 0;
}
