#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("a+b=%d\n",c);
	c=a-b;
	printf("a-b=%d\n",c);
	c=a*b;
	printf("a*b=%d\n",c);
	c=a/b;
	printf("a/b=%d\n",c);
	c=a%b;
	printf("Remainder of the result is=%d",c);
	return 0;
}
