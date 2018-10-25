#include<stdio.h>
int prime(int a);
int main()
{
	int x,y;
	printf("Enter a number:");
	scanf("%d",&x);
	y=prime(x);
	if(y==1)
	{
		printf("%d is prime",x);
	}
	else if(y==2)
	{
		printf("%d is neither composite nor prime",x);
	}
	else
	{
		printf("%d is composite",x);
	}
}
int prime(int a)
{
	int i;
	if(a==1||a==0||a<0)
	{
		return 2;
	}
	if(a>1)
	{
	
		for(i=2;i<=a;i++)
		{
			if(a%i==0)
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
}
