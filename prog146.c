#include<stdio.h>
int main()
{
	int i,j,x;
	
	x=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
			printf("%5i",x++);
		printf("\n\n");
	}

	return 0;
}
