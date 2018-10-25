#include<stdio.h>
int sum();
int main()
{
	float s;
	s=sum();
	printf("Sum=%.2f",s);
	return 0;
}
int sum()
{
	float x,y,sum;
	printf("Enter two numbers:");
	scanf("%f%f",&x,&y);
	sum=x+y;
	return sum;
}
