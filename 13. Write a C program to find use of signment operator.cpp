#include <stdio.h>
int main()
{
	int x,y;
	printf("Enter the value of x=");
	scanf("%d",&x);
	y=x;
	printf("The value of y is:%d\n",y);
	y+=x;
	printf("The value of y is:%d\n",y);
	y-=x;
	printf("The value of y is:%d\n",y);
	y*=x;
	printf("The value of y is:%d",y);
	return 0;
}
