#include <stdio.h>
int main()
{
	int base,height;
	float area;
	printf("Enter base of the triangle:");
	scanf("%d",&base);
	printf("\nEnter height of the triangle:");
	scanf("%d",&height);
	area=0.5*base*height;
	printf("\nArea of the triangle is %.2f",area);
	return 0;
}
