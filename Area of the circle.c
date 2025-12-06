#include <stdio.h>
int main()
{
	int radius;
	float area;
	printf("Enter radius of the circle:");
		scanf("%d",&radius);
		area=3.14*radius*radius;
		printf("\nArea of the circle is %.2f",area);
		return 0;
}
