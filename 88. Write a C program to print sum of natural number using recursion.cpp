#include<stdio.h>
int sum(int n);
int main()
{
	int num,result;
	printf("Enter num:");
	scanf("%d",&num);
	result=sum(num);
	printf("Sum=%d",result);
	return 0;
}
int sum(int n)
{
	if(n!=0)
	{
		return n+sum(n-1);
	}
	else
	{
		return n;
	}
}
