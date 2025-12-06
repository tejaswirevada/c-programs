#include <stdio.h>
int main()
{
	int length,breadth,area;
	printf("Enter length of the triangle:");
	scanf("%d",&length);
	printf("\nEnter breadth of the rectangle:");
	scanf("%d",&breadth);
	area=length*breadth;
	printf("\nArea of the rectangle is %d",area);
	return 0;
}
