#include <stdio.h>
int main()
{
	int u;
	float a,c,t;
	printf("Enter no. of units:");
	scanf("%d",&u);
	if(u<=50)
	{
		a=u*2.5;
		c=25;
	}
	else if(u<=100)
	{
		a=u*3;
		c=50;
	}
	else if(u<=200)
	{
		a=u*3.5;
		c=75;
	}
	else if(u<=300)
	{
		a=u*4;
		c=100;
    }
    else
    {
    a=u*5;
    c=125;
	}
	t=a+c;
	printf("\nTotal current bill is %.2f",t);
	return 0;
}
