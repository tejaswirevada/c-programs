#include <stdio.h>
int main()
{
	int a[10][10],b[10][10],i,j,n;
	printf("\nEnter n value:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("\nEnter value at a[%d][%d]position:",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	printf("\nBEFORE TRANSPOSE:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	printf("\nAFTER TRANSPOSE:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
