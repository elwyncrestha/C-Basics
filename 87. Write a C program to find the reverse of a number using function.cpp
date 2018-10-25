#include<stdio.h>
int reverse(int a);
int main()
{
	int x,rev;
	printf("Enter a number:");
	scanf("%d",&x);
	rev=reverse(x);
	printf("\nReverse=%d",rev);
	return 0;
}
int reverse(int a)
{
	int digit,r=0;
	while(a!=0)
	{
	
	digit=a%10;
	r=r*10+digit;
	a/=10;
}
	return r;
}
