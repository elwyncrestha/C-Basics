#include<stdio.h>
void armstrong(int a);
int main()
{
	int x;
	printf("Enter a no. :");
	scanf("%d",&x);
	armstrong(x);
}
void armstrong(int a)
{
	int b,digit,sum=0;
	b=a;
	while(a!=0)
	{
		digit=a%10;
		sum+=(digit*digit*digit);
 		a/=10;
	}
	if(sum==b)
	{
		printf("Entered number %d is armstrong",b);
	}
	else
	{
		printf("Entered number %d is not armstrong",b);
	}
}
