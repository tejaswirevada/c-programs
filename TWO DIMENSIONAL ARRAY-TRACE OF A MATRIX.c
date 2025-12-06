#include <stdio.h>
int main()
{
	int a[10][10],n,i,j,sum=0;
	printf("\nEnter array size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nEnter value at position a[%d][%d]position:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
		{
    	sum=sum+a[i][i];
    }
printf("\nTrace of the matrix is %d",sum);
	return 0;
}
