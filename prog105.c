#include<stdio.h>
int main()
{
	int i,ll,ul;
	
	printf("Lower limit:");
	scanf("%i",&ll);
	printf("Upper limit:");
	scanf("%i",&ul);
	
	for(i=ul;i>=ll;i--)
		printf("%i\n",i);
		
	return 0;
}
