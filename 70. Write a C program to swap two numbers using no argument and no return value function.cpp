#include<stdio.h>
void swap();
int main()
{
	swap();
}
void swap()
{
	float a,b,temp;
	printf("Enter value of a:\n");
	scanf("%f",&a);
	printf("Enter value of b:");
	scanf("%f",&b);
	temp=a;
	a=b;
	b=temp;
	printf("The value of a after swap is:%f\n",a);
	printf("The value of b after swap is:%f",b);
}
