#include<stdio.h>
void series(int nth);
int main()
{
	int n;
	printf("Enter no. of terms:");
	scanf("%d",&n);
	series(n);
}
void series(int nth)
{
	int i,a=1;
	for(i=1;i<=nth;i++)
	{
		printf("%d\t",a);
		a+=4;
	}
}
