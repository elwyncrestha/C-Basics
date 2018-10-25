#include<stdio.h>
void mul(int a);
int main()
{
	int x;
	printf("Enter the number:");
	scanf("%d",&x);
	mul(x);
}
void mul(int a)
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",a,i,a*i);
	}
}
