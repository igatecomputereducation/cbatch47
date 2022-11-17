#include<stdio.h>
int main()
{
	float hei,wei,bmi;
	printf("Your height in feets:");
	scanf("%f",&hei);
	printf("Your weight in kgs:");
	scanf("%f",&wei);
	hei=hei*0.3048;
	bmi=wei/(hei*hei);
	printf("Your body mass index %f",bmi);
	return 0;
}
