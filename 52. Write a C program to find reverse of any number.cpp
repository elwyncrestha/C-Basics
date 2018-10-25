#include<stdio.h>
int main()
{
	long num,digit,reverse=0;
	printf("Enter a number:");
	scanf("%ld",&num);
	
	while(num>0)
	{
		digit=num%10;
		reverse=reverse*10+digit;
		num/=10;
	}
	printf("\nReverse=%d",reverse);
	return 0;
}
