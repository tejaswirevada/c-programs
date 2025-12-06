#include <stdio.h>
int main()
{
	int n,i,r[4];
	printf("\nEnter n value:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter value at r[%d] position:",i);
		scanf("%d",&r[i]);
	}
	printf("\nARRAY ELEMENTS ARE:");
	for(i=0;i<n;i++)
	{
		printf("%4d",r[i]);
	}
	return 0;
}
