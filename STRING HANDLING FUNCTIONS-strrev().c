#include <stdio.h>
#include <string.h>
int main()
{
	char a[200];
	printf("Enter a string:");
	gets(a);
	strrev(a);
	printf("Reverse data:");
	printf("\n%s",a);
	return 0;
}
