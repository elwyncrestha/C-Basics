#include<stdio.h>
int addnum(int a,int b);//function prototype
int main()
{
	int x,y,sum;
	printf("Enter the value of x and y:");
	scanf("%d%d",&x,&y);
	
	sum=addnum(x,y);//function call
	printf("Sum=%d",sum);
	return 0;
}
int addnum(int a,int b)
{
	int result;
	result=a+b;
	return result;//return statement
}
