#include <stdio.h>
int main()
{
	int a[10],n,i,j,temp;
	printf("\nEnter array size:");
	scanf("%d",&n);
		printf("\nEnter elements in array:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nAFTER SORTING:");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	return 0;
}
