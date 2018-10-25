#include<stdio.h>
int main()
{
	long int x,digit,sum=0,num;
	printf("Enter a number:");
	scanf("%ld",&x);
	num=x;
	while(x>0)
	{
		digit=x%10;
		sum+=digit;
		x/=10;
	}
	printf("\nSum of number %ld=%ld",num,sum);
	return 0;
}
