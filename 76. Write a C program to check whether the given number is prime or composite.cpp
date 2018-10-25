#include<stdio.h>
int prime(int a);
int main()
{
	int x,y;
	printf("Enter the number:");
	scanf("%d",&x);
	y=prime(x);
	if(y==1)
	{
		printf("%d is prime",x);
	}
	else
	{
		printf("%d is composite",x);
	}
}
int prime(int a)
{
	int i,b;
	for(i=2;i<=a;i++)
	{
		b=a%i;
		if(b==0)
		{
			break;
		}
	}
	if(i==a)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
