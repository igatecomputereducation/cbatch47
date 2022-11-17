#include<stdio.h>
int main()
{
	int cmr,pmr,nu;
	float bill;
	printf("Last month meter reading:");
	scanf("%i",&pmr);
	printf("This month meter reading:");
	scanf("%i",&cmr);
	nu=cmr-pmr;
	bill=nu*8.50;
	printf("Number of units consumed %i\n",nu);
	printf("Total bill to pay %.2f",bill);
	return 0;
}
