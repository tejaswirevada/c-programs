#include <stdio.h>
int main()
{
int n,a[100][100],i,j,lower=1;
printf("\nEnter array size:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
	printf("\nEnter value at a[%d][%d]position:",i,j);
	scanf("%d",&a[i][j]);
	}
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
    	if(j>i&&a[i][j]!=0||j<=i&&a[i][j]==0)
    	{
    		lower=0;
    		break;
		}
	}
}
if(lower==1)
{
	printf("\nGiven matrix is lower triangular matrix");
}
else
{
	printf("\nGiven matrix is not a lower triangular matrix");
}
return 0;
}
