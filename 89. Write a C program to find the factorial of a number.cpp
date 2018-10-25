#include<stdio.h>
int fact(int a);
int main()
{
	int x,factorial;
	printf("Enter a number:");
	scanf("%d",&x);
	factorial=fact(x);
	printf("Factorial=%d",factorial);
	return 0;
}
int fact(int a)
{
	if(a!=1)
	{
		return a*fact(a-1);	
	}
	else
	{
		return a;
	}
}
