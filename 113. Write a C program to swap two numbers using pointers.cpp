#include<stdio.h>
void swap(int *a, int *b);
int main()
{
	int x,y;
	printf("Enter values of x and y:");
	scanf("%d%d",&x,&y);
	printf("\nBefore swap:\nx=%d\ny=%d",x,y);
	swap(&x,&y);
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("\nAfter swap:\nx=%d\ny=%d",*a,*b);
}
