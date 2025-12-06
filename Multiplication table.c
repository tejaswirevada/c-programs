#include <stdio.h>
int main()
{
	int n,m=1,o;
	printf("\nEnter n value:");
	scanf("%d",&n);
	while(m<=12)
	{
		o=n*m;
		printf("\n%d*%d=%d",n,m,o);
		m++;
	}
	return 0;
}
