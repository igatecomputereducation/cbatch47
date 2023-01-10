#include<stdio.h>
#include "manip.h"
int main()
{
	int x,y;
	printf("Enter 2 integers\n");
	scanf("%i%i",&x,&y);
	printf("Addition %i\n",sum(x,y));
	printf("Subtraction %i\n",sub(x,y));
	printf("Product %i\n",pro(x,y));
	printf("Division %f",div(x,y));
	return 0;
}

