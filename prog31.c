#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age:");
	scanf("%i",&age);
	if(age>=18)
		printf("Right to vote");
	if(age<18)
		printf("No right to vote");
	return 0;
}
