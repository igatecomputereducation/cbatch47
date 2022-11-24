#include<stdio.h>
int main()
{
	int n,gr;
	printf("Enter any natural number:");
	scanf("%i",&n);
	gr=(n%9==0)?9:n%9;
	printf("your number %i\n",gr);
	switch(gr)
	{
		case 1:
		case 5:
		case 9:
			printf("Lucky");
			break;
		case 2:
		case 7:
			printf("It's ok");
			break;
		default:
			printf("Change your number");
	}
	return 0;
}
