#include<stdio.h>
int main()
{
	int mat,phy,che,tot;
	float avg;
	printf("Enter the marks in maths,physics and chemistry\n");
	scanf("%i%i%i",&mat,&phy,&che);
	tot=mat+phy+che;
	avg=tot/3.0;
	printf("Total marks %i\n",tot);
	printf("Average marks %f\n",avg);
	return 0;
}
