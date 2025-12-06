#include <stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("\nEnter temperature in celsius scale:");
	scanf("%f",&celsius);
	fahrenheit=(1.8*celsius)+32;
	printf("\nTemperature in fahrenheit sacle is %.3f",fahrenheit);
	return 0;
}
