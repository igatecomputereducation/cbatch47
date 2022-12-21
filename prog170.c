#include<stdio.h>
int main()
{
	int a[50],i,n,flag;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	flag=1;
	for(i=0;i<n/2;i++)
	{
		if(a[i]!=a[n-1-i])
		{
			flag=0;
			break;
		}
	}
	
	if(flag)
		printf("Palindrome");
	else
		printf("Not a palindrome");
	return 0;
}
