#include<stdio.h>
int com(float a, float b);
int main()
{
	float x,y,z;
	printf("Enter two numbers:");
	scanf("%f%f",&x,&y);
	z=com(x,y);
	printf("Greatest number=%.2f",z);
	return 0;
}
int com(float a,float b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
	
}
