#include <stdio.h>
int main()
{
	int n,i,a[n],sum=0;
	printf("\nEnter n value:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter value at a[%d] position:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("\nSum of the array digits=%d",sum);
	return 0;
}
