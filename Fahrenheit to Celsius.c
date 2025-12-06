#include <stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("Enter temperature in fahrenheit scale:");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)/1.8;
	printf("\nTemperature in celsius sacle is %.3f",celsius);
	return 0;
}
