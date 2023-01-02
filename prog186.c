#include<stdio.h>
void printbill(float,int);
int main()
{
	float price;
	int qty;
	printf("Price:");
	scanf("%f",&price);
	printf("Quantity:");
	scanf("%i",&qty);
	printbill(price,qty);
	return 0;
}
void printbill(float p,int q)
{
	float bill,dis,nbill;
	bill=p*q;
	dis=bill*5/100;
	nbill=bill-dis;
	printf("Bill %.2f\n",bill);
	printf("Discount %.2f\n",dis);
	printf("Net bill %.2f",nbill);
}

