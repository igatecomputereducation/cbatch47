#include<stdio.h>
int main()
{
	int b,h;
	float area;
	printf("Breadth:");
	scanf("%i",&b);
	printf("Height:");
	scanf("%i",&h);
	area=1.0/2*h*b;
	printf("Area %f",area);
	return 0;
}
