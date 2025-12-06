#include <stdio.h>
int main()
{
	int n,i,min,max,a[n];
	printf("\nEnter n value:");
	scanf("%d",&n);
	printf("\nEnter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("\nMaximum value in the array is %d",max);
	printf("\nMinimum value in the array is %d",min);
	return 0;
	
}
