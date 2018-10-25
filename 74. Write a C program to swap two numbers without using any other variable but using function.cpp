#include<stdio.h>
void swap(int a, int b);
int main()
{
	int x,y;
	printf("Enter two numbers:");
	scanf("%d%d",&x,&y);
	printf("\nBefore swap:\n");
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	swap(x,y);
}
void swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swap:\n");
	printf("x=%d\n",a);
	printf("y=%d",b);
}
