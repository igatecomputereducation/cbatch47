#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 3 integers\n");
	scanf("%i%i%i",&a,&b,&c);
	if(a==b && b==c)
		printf("Equals");
	else
	{
		if(a>b && a>c)
			printf("Biggest %i",a);
		else
		{
			if(b>c)
				printf("Biggest %i",b);
			else
				printf("Biggest %i",c);
				
		}
	}
	return 0;
	
}
