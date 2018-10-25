#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	printf("%d==%d=%d\n",a,b,a==b);
	printf("%d!=%d=%d\n",a,b,a!=b);
	printf("%d>%d=%d\n",a,b,a>b);
	printf("%d<%d=%d",a,b,a<b);
	return 0;
}
