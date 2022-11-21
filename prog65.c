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
		if(a<b && a<c)
			printf("Smallest %i",a);
		else
		{
			if(b<c)
				printf("Smallest %i",b);
			else
				printf("Smallest %i",c);
		}
	}
	return 0;
}
