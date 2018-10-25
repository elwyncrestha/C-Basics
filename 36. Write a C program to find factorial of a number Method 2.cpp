#include<stdio.h>
int main()
{
	int i,x,factorial=1;
	printf("Enter any number:");
	scanf("%d",&x);
	
	for(i=1;i<=x;i++)
	{
		factorial*=i;
	}
	printf("Factorial=%d",factorial);
	return 0;
}
