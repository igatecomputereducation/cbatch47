#include<stdio.h>
int main()
{
	int a[50],i,n,k,s,temp;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	for(k=0;k<n-1;k++)
	{
		for(i=k+1;i<n;i++)
		{
			if(a[i]<a[k])
			{
				temp=a[i];
				a[i]=a[k];
				a[k]=temp;
			}
		}
	}
	
	for(i=0;i<n;)
	{
		if(a[i]==a[i+1])
		{
			for(s=i;s<n;s++)
				a[s]=a[s+1];
			n--;
		}
		else
			i++;
	}
	
	printf("Result array\n");
	for(i=0;i<n;i++)
		printf("%5i",a[i]);
	return 0;
}
