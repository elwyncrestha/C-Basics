#include<stdio.h>
int main()
{
	int i,n,num[200],max;
	printf("Enter size of array not more than 200:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter number%d:",i+1);
		scanf("%d",&num[i]);
	}
	max=num[0];
	for(i=1;i<n;i++)
	{
		if(num[i]>max)
		{
			max=num[i];
		}
	}
	printf("\nLargest value is:%d",max);
	return 0;
}
