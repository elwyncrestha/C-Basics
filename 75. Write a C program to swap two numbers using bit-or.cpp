#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter x:");
	scanf("%d",&x);
	printf("Enter y:");
	scanf("%d",&y);
	
	x=x^y;
	y=x^y;
	x=x^y;
	printf("The value of x is=%d\n",x);
	printf("The value of y is=%d",y);
	return 0;
}
