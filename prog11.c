#include<stdio.h>
int main()
{
	int time,amt;
	float rate,si,tot;
	printf("Amount:");
	scanf("%i",&amt);
	printf("Time in months:");
	scanf("%i",&time);
	printf("Rate of interest:");
	scanf("%f",&rate);
	si=amt*time*rate/100;
	tot=amt+si;
	printf("----------------------------\n");
	printf("Amount %i\n",amt);
	printf("Simple interest %f\n",si);
	printf("Total amount to pay %f",tot);
	return 0;
}
