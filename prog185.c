#include<stdio.h>
void rectangle(int,int);
int main()
{
	int len,bre;
	printf("Length:");
	scanf("%i",&len);
	printf("Breadth:");
	scanf("%i",&bre);
	rectangle(len,bre);
	return 0;
}
void rectangle(int x,int y)
{
	printf("Area %i\n",x*y);
	printf("Perimeter %i",2*(x+y));
}

