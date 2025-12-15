#include <stdio.h>
#include <math.h>
int main()
{
	float p,r,t,s_i,c_i;
	scanf("%f",&p);
	scanf("%f",&r);
	scanf("%f",&t);
	s_i=(p*r*t)/100;
	c_i=p*(pow(1+(r/100),t)-1);
	printf("simple interest=%.2f\n",s_i);
	printf("compound Interest=%.2f\n",c_i);
	return 0;
}
