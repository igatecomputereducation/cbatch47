#include<stdio.h>
int main()
{
	int a[50],i,n,pos;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	printf("Position to insert:");
	scanf("%i",&pos);
	
	if(pos<1 || pos>n)
		printf("Invalid position");
	else
	{
		pos--;
		
		for(i=n-1;i>=pos;i--)
			a[i+1]=a[i];
			
		printf("Enter new element:");
		scanf("%i",&a[pos]);
		
		n++;
		
		printf("Result array\n");
		for(i=0;i<n;i++)
			printf("%5i",a[i]);
	}
	return 0;
}
