#include<stdio.h>
int main()
{
	int i,ll,ul;
	
	printf("Lower limit:");
	scanf("%i",&ll);
	printf("Upper limit:");
	scanf("%i",&ul);
	
	i=ll;
	abc:
		printf("%i\n",i);
		i=i+1;
	if(i<=ul)
		goto abc;
	
	return 0;
}
