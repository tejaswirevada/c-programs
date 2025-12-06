#include <stdio.h>
int main()
{
	int n,i,a[n];
	printf("\nEnter n value:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter value at a[%d] position:",i);
		scanf("%d",&a[i]);
	}
	printf("\nREVERSE OF THE GIVEN ARRAY IS:");
	for(i=n-1;i>=0;i--)
	{
		printf("\t%d",a[i]);
	}
	return 0;
}
