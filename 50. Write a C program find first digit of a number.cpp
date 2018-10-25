#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter a number:");
	scanf("%d",&x);
	
	while(x>=10)
	{
	 x=x/10;	
	}
	printf("First Digit = %d",x);
}
