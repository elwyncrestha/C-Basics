#include<stdio.h>
void fibo();
int main()
{
	fibo();
}
void fibo()
{
	int n,num1=0,num2=1,i,sum;
	printf("Enter no. of terms:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",num1);
		sum=num1+num2;
		num1=num2;
		num2=sum;
	}
}
