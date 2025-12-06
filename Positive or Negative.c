#include <stdio.h>
int main()
{
	int a;
	printf("Enter a value:");
	scanf("%d",&a);
	if(a>0)
	{
		printf("\n %d is a positive number",a);
	}
	else
	{
		printf("\n %d is a negative number",a);
	}
	return 0;
}
