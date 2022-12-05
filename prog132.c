#include<stdio.h>
int main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
			printf("%5i",j);
		printf("\n\n");
	}
	return 0;
}
