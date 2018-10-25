#include<stdio.h>
int main()
{
	int n,i,max;
	int num[100];
	
	printf("Enter the no. of terms:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter number%d:",i+1);
		scanf("%d",&num[i]);
	}
	max=num[0];
	for(i=1;i<n;i++)
	{
		if(max<num[i])
		{
			max=num[i];
		}
	}
	printf("Largest number is:%d",max);
	return 0;
	
}
