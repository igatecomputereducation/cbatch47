#include<stdio.h>
int main()
{
	int n,t,sum,limit;
	
	printf("Enter the limit:");
	scanf("%i",&limit);
	
	for(n=1;n<=limit;n++)
	{
		t=n;
		for(sum=0;t!=0;t=t/10)
			sum=sum+(t%10)*(t%10)*(t%10);
		if(sum==n)
			printf("%i\n",n);
	}
			
	return 0;
}
