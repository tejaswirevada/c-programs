#include <stdio.h>
int main()
{
	int a[200],n,found=0,i,search;
	printf("\nEnter n value:");
	scanf("%d",&n);
	printf("\nEnter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nSearching element is:");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(search==a[i])
		{
		printf("\nSearching element found at the location %d:",i);
		found=1;
		break;
		}
	}
	if(found==0)
		{
	printf("\nSearching element not found");
		}
		return 0;
}
