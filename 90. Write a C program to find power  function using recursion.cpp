#include<stdio.h>
int pow(int a,int b);
int main()
{
	int x,y,z;
	printf("Enter a number:\n");
	scanf("%d",&x);
	printf("Enter the power of a number:");
	scanf("%d",&y);
	z=pow(x,y);
	printf("Ans=%d",z);
	return 0;
}
int pow(int a,int b)
{
	if(b!=0)
	{
		return a*pow(a,b-1);
	}
	else
	{
		return 1;
	}
}
