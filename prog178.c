#include<stdio.h>
#include<math.h>
int main()
{
	int a[50][50],i,j,n,m,sum;
	float mean,norm;
	
	printf("Enter the class of matrix\n");
	scanf("%i%i",&n,&m);
	
	printf("Enter matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			scanf("%i",&a[i][j]);
	}
	
	sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			sum=sum+a[i][j];
	}
	
	mean=(float)sum/(n*m);
	printf("The mean of the matrix %.2f\n",mean);
	
	sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			sum=sum+a[i][j]*a[i][j];
	}
	
	norm=sqrt(sum);
	printf("Norm of matrix %.2f",norm);
	return 0; 
}
