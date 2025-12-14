#include <stdio.h>
int main()
{
	int a[10],n,i,j,found=0;
	printf("\nEnter array size:");
	scanf("%d",&n);
		printf("\nEnter elements in array:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("\nDuplicate elements in the array is:");
	for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]==a[j])
		{
			printf("%4d",a[i]);
			found=1;
			break;	
		}
    }
}	
	if(found==0)
	{
		printf("\nNo Duplicates are found");
	}
	return 0;
}
