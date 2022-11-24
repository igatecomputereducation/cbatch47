#include<stdio.h>
int main()
{
	int qty;
	float price,bill,dis,nbill;
	printf("Price:");
	scanf("%f",&price);
	printf("Quantity:");
	scanf("%i",&qty);
	bill=price*qty;
	dis=(bill>1000)?bill*5/100:bill*3/100;
	nbill=bill-dis;
	printf("Total bill %f\n",bill);
	printf("Discount %f\n",dis);
	printf("Net bill %f",nbill);
	return 0;
}
