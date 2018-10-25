#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	printf("a++=%d\n",a++);
	printf("++a=%d\n",++a);
	printf("b--=%d\n",b--);
	printf("--b=%d",--b);
	return 0;
}
