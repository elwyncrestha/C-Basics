#include<stdio.h>
int small(int a, int b, int c);
int main()
{
	int x,y,z,p;
	printf("Enter three numbers:");
	scanf("%d%d%d",&x,&y,&z);
	p=small(x,y,z);
	printf("Smallest number=%d",p);
	return 0;
}
int small(int a,int b, int c)
{
	if((a<b)&&(a<c))
	{
		return a;
	}
	else if(b<c)
	{
		return b;
	}
	else
	{
		return c;
	}
}
