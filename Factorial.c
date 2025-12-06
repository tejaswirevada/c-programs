#include <stdio.h>
int main()
{
	int n,p=1,i;
	printf("Enter n value:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		p=p*i;
	}
	printf("\n%d factorial is %d",n,p);
	return 0;
}
