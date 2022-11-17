#include<stdio.h>
int main()
{
	int sal,sales;
	float comm,gross;
	printf("Salary:");
	scanf("%i",&sal);
	printf("Sales:");
	scanf("%i",&sales);
	comm=sales*5.0/100;
	gross=sal+comm;
	printf("---------------\n");
	printf("Salary %i\n",sal);
	printf("Commission %f\n",comm);
	printf("Gross salary %f\n",gross);
	return 0;
}
