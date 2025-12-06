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
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
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

