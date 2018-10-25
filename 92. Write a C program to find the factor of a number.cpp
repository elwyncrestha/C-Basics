#include<stdio.h>
void factor(int a);
int main()
{
	int x,y;
	printf("Enter a number:");
	scanf("%d",&x);
	factor(x);
}
void factor(int a)
{
	int i;
	printf("Factors:");
	for(i=1;i<=a;i++)
	{
		
		if(a%i==0)
		{
			printf("%d\t",i);
		}
	}
}
