#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=5-i;j++)
			printf("     ");
		for(j=i;j>=1;j--)
			printf("%5i",j);
		printf("\n\n");
	}
	
	return 0;
}
