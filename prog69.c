#include<stdio.h>
int main()
{
	int mat,phy,che,tot;
	float avg;
	printf("Marks in maths, physics and chemistry\n");
	scanf("%i%i%i",&mat,&phy,&che);
	tot=mat+phy+che;
	avg=tot/3.0;
	printf("Total %i\n",tot);
	printf("Average %f\n",avg);
	if(mat>=35 && phy>=35 && che>=35)
	{
		printf("Passed in ");
		if(avg>=75)
			printf("Distinction");
		else if(avg>=60)
			printf("First class");
		else if(avg>=50)
			printf("Second class");
		else
			printf("Ordinary");
	}
	else
	{
		printf("Failed in..\n");
		if(mat<35)
			printf("Maths\n");
		if(phy<35)
			printf("Physics\n");
		if(che<35)
			printf("Chemistry");
		
	}
	return 0;
}
