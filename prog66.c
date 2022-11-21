#include<stdio.h>
int main()
{
	int n,fi,se,th;
	printf("Any 3 digit natural number:");
	scanf("%i",&n);
	th=n%10;
	n=n/10; 
	se=n%10;
	n=n/10;
	fi=n%10;
	if(fi==se && se==th)
		printf("Equals");
	else
	{
		if(fi>se && fi>th)
			printf("Biggest digit %i",fi);
		else
		{
			if(se>th)
				printf("Biggest digit %i",se);
			else
				printf("Biggest digit %i",th);
		}
		
		if(fi<se && fi<th)
			printf("Smallest digit %i",fi);
		else
		{
			if(se<th)
				printf("Smallest digit %i",se);
			else
				printf("Smallest digit %i",th);
		}
	}
	return 0;
}
