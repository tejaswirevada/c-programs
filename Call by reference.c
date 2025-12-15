#include<stdio.h>
void swap(int *x,int *y);
int main()
{
	int a=10,b=20;
	printf("\nBefore swapping a=%d,b=%d",a,b);
	swap(&a,&b);
	printf("\nAfter swapping a=%d,b=%d",a,b);
	return 0;
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
