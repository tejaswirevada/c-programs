#include <stdio.h>
#include <string.h>
int main()
{
	char a[100]="aditya",b[100];
	strcpy(b,a);
	printf("\nCopied data:");
	printf("\n%s",b);
	return 0;
}
