#include <stdio.h>
int main()
{
	int t;
	float u,a,s;
	printf("\nEnter initial velocity:");
	scanf("%f",&u);
	printf("\nEnter time :");
	scanf("%d",&t);
	printf("\nEnter acceleration:");
	scanf("%f",&a);
	s=u*t+0.5*a*t*t;
	printf("\nDistance is %.2f",s);
	return 0;
}
