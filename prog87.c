#include<stdio.h>
int main()
{
	int i,n;
	
	printf("Enter the limit:");
	scanf("%i",&n);
	
	i=1;
	do{
		printf("%i\n",i);
		i=i+1;
	}while(i<=n);
	
	
	return 0;
}
