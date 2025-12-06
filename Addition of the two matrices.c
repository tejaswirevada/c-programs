#include <stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,n;
	printf("\nEnter array size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("\nEnter value at a[%d][%d] position:",i,j);
		scanf("%d",&a[i][j]);	
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nEnter value at b[%d][%d] position:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\nThe addition of the matrix is\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
