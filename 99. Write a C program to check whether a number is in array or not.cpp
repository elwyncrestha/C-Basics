#include<stdio.h>
int main()
{
	int i,x,num[100],n;
	printf("Enter no. of array:");
	scanf("%d",&x);
	
	for(i=0;i<x;i++)
	{
		printf("Enter number%d:",i+1);
		scanf("%d",&num[i]);
	}
	
	printf("\nEnter number to check whether it is in array or not:");
	scanf("%d",&n);
	
	for(i=0;i<x;i++)
	{
		if(n==num[i])
		{
			printf("Number %d is in array",n);
			break;
		}
		if(x==i&&x!=i)
		{
			printf("Number %d is not in array",n);
		}
	}
	return 0;
}
