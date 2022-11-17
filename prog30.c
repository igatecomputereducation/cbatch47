#include<stdio.h>
int main()
{
	int ind,eng;
	printf("Score of india:");
	scanf("%i",&ind);
	printf("Score of england:");
	scanf("%i",&eng);
	if(ind==eng)
		printf("The match is draw");
	if(ind>eng)
		printf("India won the match");
	if(eng>ind)
		printf("England won the match");
	return 0;
}
