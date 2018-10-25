#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter a number:");
	scanf("%d",&x);
	
	y=x%5;
	z=x%11;
	
	if((y==0)&&(z==0))
	{
		printf("The entered number %d is divisible by 5 and 11 both",x);
	}
	else
	{
		printf("The entered number %d is not divisible by 5 and 11 both at same time");
	}
	return 0;
}
