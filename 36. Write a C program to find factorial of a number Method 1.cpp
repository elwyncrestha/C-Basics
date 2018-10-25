#include<stdio.h>
int main()
{
	long int i,x, factorial;
	printf("Enter any number:");
	scanf("%d",&x);
	
	for(i=x;i>=1;i--)
	{
		factorial*=i;
	}
	printf("Factorial=%d",factorial);
	return 0;
}
