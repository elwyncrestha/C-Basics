#include<stdio.h>
int main()
{
	int i,a,b,sum=0,x;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	x=a;
	for(i=1;i<=b;i++)
	{
		sum+=a;
	}
	printf("%d*%d=%d",x,b,sum);
	return 0;
}
