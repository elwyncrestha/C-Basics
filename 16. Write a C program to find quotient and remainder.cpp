#include <stdio.h>
int main()
{
	int x,y,a,b;
	printf("Enter two numbers(first one should be dividend and another should be divisor):");//"For eg: 15/3=5,here 15 is dividend,3 is divisor and 5 is quotient"
	scanf("%d%d",&x,&y);
	a=x/y;//for quotient
	b=x%y;//for remainder
	printf("Quotient=%d\n",a);
	printf("Remainder=%d",b);
	return 0;
}
