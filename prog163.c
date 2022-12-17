#include<stdio.h>
int main()
{
	int a[50],i,n,x,y;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	printf("Find what:");
	scanf("%i",&x);
	
	printf("Replace with:");
	scanf("%i",&y);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
			a[i]=y;
	}
	
	printf("The result array\n");
	for(i=0;i<n;i++)
		printf("%5i",a[i]);
		
	return 0;
}
