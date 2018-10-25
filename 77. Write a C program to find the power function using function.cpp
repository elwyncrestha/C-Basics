#include<stdio.h>
int pow(int a, int b);
int main()
{
	int x,y,z;
	printf("Enter a number:\n");
	scanf("%d",&x);
	printf("Enter the power:");
	scanf("%d",&y);
	z=pow(x,y);
	printf("ans=%d",z);
}
int pow(int a, int b)
{
	int i,pow=1;
	for(i=1;i<=b;i++)
	{
	pow*=a;
	}
	return pow;
}

