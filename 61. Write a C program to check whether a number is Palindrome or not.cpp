#include<stdio.h>
int main()
{
	int x,digit,reverse=0,a;
	printf("Enter a number:");
	scanf("%d",&x);
	a=x;
	printf("\nNumber before reversing:%d\n",a);
	
	while(x!=0)
	{
		digit=x%10;
		reverse=(reverse*10)+digit;
		x/=10;
	}
	printf("Number after reversing=%d\n",reverse);
	if(a==reverse)
	{
		printf("Entered number is Palindrome");
	}
	else
	{
		printf("Entered number is not Palindrome");
	}
	
	return 0;
}
