#include<stdio.h>
int main()
{
	int mat,phy,che;
	printf("Enter the marks in maths, physics and chemistry\n");
	scanf("%i%i%i",&mat,&phy,&che);
	if(mat>=35 && phy>=35 && che>=35)
		printf("Pass");
	else
	{
		printf("Failed in..\n");
		if(mat<35)
			printf("Maths\n");
		if(phy<35)
			printf("Physics\n");
		if(che<35)
			printf("Chemistry");
	}
	return 0;
}
