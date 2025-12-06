#include <stdio.h>
int main()
{
	int n,r=0,s=0,temp;
	printf("\nEnter n value:");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(temp==s)
	{
		printf("\nPalindrome");
	}
	else
	{
		printf("\nNot a palindrome");
	}
	return 0;
}
