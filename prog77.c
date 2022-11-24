#include<stdio.h>
int main()
{
	int x,y,ch;
	printf("Enter 2 integers\n");
	scanf("%i%i",&x,&y);
	printf("1.Addition\n2.Subtraction\n3.Product\n4.Division\nEnter your choice [1..4]:");
	scanf("%i",&ch);
	switch(ch)
	{
		case 1:
			printf("Addition %i",x+y);
			break;
		case 2:
			printf("Subtraction %i",x-y);
			break;
		case 3:
			printf("Product %i",x*y);
			break;
		case 4:
			printf("Division %f",(float)x/y);
			break;
		default:
			printf("Invalid choice");
	}
	return 0;
}
