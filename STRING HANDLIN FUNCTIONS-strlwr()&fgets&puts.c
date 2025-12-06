#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	printf("\nEnter a string:");
	fgets(a,100,stdin);
	strlwr(a);
	printf("\nLower case data:");
	puts(a);
	return 0;
}
