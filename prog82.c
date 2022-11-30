#include<stdio.h>
int main()
{
	int i,n;
	
	printf("From where:");
	scanf("%i",&n);
	
	i=n;
	abc:
		printf("%i\n",i);
		i=i-1;
	if(i>=1)
		goto abc;
	
	return 0;
}
