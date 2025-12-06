#include <stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("\nEnter n value:");
	scanf("%d",&n);
	while(i<=n)
	{
	sum=sum+i;
	i++;
	}
	printf("\nSum of n natural numbers is %d",sum);
	return 0;
}
