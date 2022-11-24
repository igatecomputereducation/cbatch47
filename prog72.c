#include<stdio.h>
int main()
{
	float hei,wei,bmi;
	printf("Height in feets:");
	scanf("%f",&hei);
	hei=hei*0.3048;
	printf("Weight in kgs:");
	scanf("%f",&wei);
	bmi=wei/(hei*hei);
	printf("Your BMI %f\n",bmi);
	if(bmi>=30)
		printf("You are obes");
	else if(bmi>=25)
		printf("You are over weight");
	else if(bmi>=18.5)
		printf("You are normal");
	else
		printf("You can eat..sleep and repeat");
	return 0;
}
