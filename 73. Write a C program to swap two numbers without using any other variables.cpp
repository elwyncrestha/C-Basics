#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the value of x:\n");
	scanf("%d",&x);
	printf("Enter the value of y:");
	scanf("%d",&y);
	
	x=x+y;
	y=x-y;
	x=x-y;
	
	printf("The value of x is=%d\n",x);
	printf("The value of y is=%d",y);
	return 0;
}
