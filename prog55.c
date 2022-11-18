#include<stdio.h>
int main()
{
	int mat,phy,che;
	printf("Enter the marks in 3 subjects\n");
	scanf("%i%i%i",&mat,&phy,&che);
	if(mat>=35 && phy>=35 && che>=35)
		printf("Pass");
	else
		printf("Failed");
	return 0;
}
