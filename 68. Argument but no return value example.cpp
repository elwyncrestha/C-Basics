#include<stdio.h>
void addnum(int a,int b);
int main()
{
	int x,y,sum;
	printf("Enter two numbers:");
	scanf("%d%d",&x,&y);
	
	addnum(x,y);
}
void addnum(int a,int b)
{
	int result;
	result=a+b;
	printf("Sum=%d",result);
}
