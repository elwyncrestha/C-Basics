#include<stdio.h>
int main()
{
	int x[10];
	int i,sum=0,average;
	for(i=0;i<10;i++)
	{
		printf("Enter a number%d:",i+1);
		scanf("%d",&x[i]);
		sum+=x[i];
	}
		average=sum/10;
	printf("Average=%d",average);
	return 0;
}
