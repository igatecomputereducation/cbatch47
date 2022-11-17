#include<stdio.h>
int main()
{
	int bre,wid,hei,vol;
	printf("Enter 3 sides of a box:");
	scanf("%i%i%i",&hei,&wid,&bre);
	vol=hei*wid*bre;
	printf("Volume of box %i",vol);
	return 0;
}
