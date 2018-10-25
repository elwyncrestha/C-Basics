#include <stdio.h>
int main()
{
	int x,y;
	printf("Enter any number:");
	scanf("%d",&x);
	y=x%10;
	printf("The last digit of the above number is:%d",y);
	return 0;
}
