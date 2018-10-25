#include<stdio.h>
void cswap(int *a, int *b, int *c);
int main()
{
	int x,y,z;
	printf("Enter values of x,y and z:");
	scanf("%d%d%d",&x,&y,&z);
	printf("\nBefore swap:\nx=%d\ny=%d\nz=%d",x,y,z);
	cswap(&x,&y,&z);
	return 0;
}
void cswap(int *a, int *b, int *c)
{
	int temp;
	temp=*a;
	*a=*c;
	*c=*b;
	*b=temp;
	printf("\nAfter swap:\nx=%d\ny=%d\nz=%d",*a,*b,*c);
}
