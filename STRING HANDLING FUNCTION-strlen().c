#include <stdio.h>
#include <string.h>
int main()
{
	char str[200];
	int a;
	printf("Enter any string:");
	gets(str);
	a=strlen(str);
	printf("%d",a);
	return 0;
}
