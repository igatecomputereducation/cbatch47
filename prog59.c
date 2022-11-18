#include<stdio.h>
int main()
{
	int w,b,h;
	printf("Enter 3 sides of a cube\n");
	scanf("%i%i%i",&w,&b,&h);
	if(w==b && b==h)
		printf("Cube");
	else
		printf("Not a cube");
	return 0;
}
