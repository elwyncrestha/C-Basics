#include<stdio.h>
int main()
{
	int i,n,a;
	printf("Enter any number:");
	scanf("%d",&n);
	printf("\nEnter no. of iteration for multiplication:");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		printf("\n%d*%d=%d",n,i,n*i);
	}
	return 0;
}
