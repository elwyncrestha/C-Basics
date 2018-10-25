#include <stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter the value of a & b:");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("The value of a after swap:%d\n",a);
	printf("The value of b after swap:%d",b);
	return 0;
}
