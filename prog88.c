#include<stdio.h>
int main()
{
	int i,ll,ul;
	
	printf("Lower limit:");
	scanf("%i",&ll);
	printf("Upper limit:");
	scanf("%i",&ul);
	
	i=ul;
	do{
		printf("%i\n",i);
		i=i-1;
	}while(i>=ll);
	
	
	return 0;
}
