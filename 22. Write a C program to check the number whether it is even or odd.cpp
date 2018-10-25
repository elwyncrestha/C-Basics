#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter a number:");
	scanf("%d",&x);
	
	y=x%2;
	
	if(y==0)
	{
		printf("The entered number %d is even",x);
	}
	
	else
	{
		printf("The entered number %d is odd",x);
	}
	return 0;
}
