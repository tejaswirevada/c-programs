#include <stdio.h>
int main()
{
	int n,r=0,rev=0;
	printf("\nEnter n value:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		rev=rev*10+r;
	}
	printf("\nReverse of the digits is %d",rev);
	return 0;
}
