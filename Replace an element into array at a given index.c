#include <stdio.h>
int main()
{
	int a[5]={1,2,3,4,5},index_value,new_value,i;
	printf("\nEnter array elements:");
	for(i=0;i<5;i++)
	{
		scanf("\t%d",&a[i]);
	}
	printf("\nEnter index value from 0 to 4:");
	scanf("%d",&index_value);
	printf("\nEnter new value:");
	scanf("%d",&new_value);
	a[index_value]=new_value;
	printf("\nEnter new array:");
	for(i=0;i<5;i++)
	{
		printf("\t%d",a[i]);
	}
	return 0;
}

