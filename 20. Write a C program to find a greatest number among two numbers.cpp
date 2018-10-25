#include<stdio.h>
int main()
{
	float x,y;
	printf("Enter two numbers:");
	scanf("%f%f",&x,&y);
	
	if(x>y)
	{
		printf("%.2f is greater than %.2f",x,y);
	}
	
	if(x<y)
	{
		printf("%.2f is greater than %.2f",y,x);
	}
	return 0;
}
