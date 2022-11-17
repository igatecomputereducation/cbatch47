#include<stdio.h>
int main()
{
	int len,bre,ar,pr;
	printf("Length:");
	scanf("%i",&len);
	printf("Breadth:");
	scanf("%i",&bre);
	ar=len*bre;
	pr=2*(len+bre);
	printf("Area of rectangle %i\n",ar);
	printf("Perimeter of rectangle %i",pr);
	return 0;
}
