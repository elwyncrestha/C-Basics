#include<stdio.h>
int addnum(int a,int b,int c);
int main()
{
	int x,y,z,sum;
    printf("Enter three numbers:");
    scanf("%d%d%d",&x,&y,&z);
    sum=addnum(x,y,z);
    printf("Sum=%d",sum);
}
int addnum(int a,int b,int c)
{
	int result;
	result=a+b+c;
	return result;
}
