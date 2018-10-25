#include<stdio.h>
void swap(float a,float b);
int main()
{
	float x,y;
	printf("Enter value of x:\n");
	scanf("%f",&x);
	printf("Enter value of y:");
	scanf("%f",&y);
	swap(x,y);
}
void swap(float a,float b)
{
	float temp;
	temp=a;
	a=b;
	b=temp;
	printf("The value of x after swap:%f\n",a);
	printf("The value of y after swap:%f",b);
}
