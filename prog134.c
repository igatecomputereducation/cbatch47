#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
			printf("%5i",j);
		printf("\n\n");
	}
	
	return 0;
}
