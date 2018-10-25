#include<stdio.h>
void fac(int a);
int main()
{
	int x;
	printf("Enter a number:");
	scanf("%d",&x);
	fac(x);
}
void fac(int a)
{
	int i,factorial=1;
	for(i=1;i<=a;i++)
	{
		factorial*=i;
	}
	printf("Factorial=%d",factorial);
}
