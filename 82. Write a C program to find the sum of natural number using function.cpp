#include<stdio.h>
int sum(int nth);
int main()
{
	int n,z;
	printf("Enter no. of terms:");
	scanf("%d",&n);
	z=sum(n);
	printf("Sum=%d",z);
	return 0;
}
int sum(int nth)
{
	int i,sum=0;
	for(i=1;i<=nth;i++)
	{
		sum+=i;
	}
	return sum;
}
