#include<stdio.h>
int main()
{
	int x[6];
	int i,sum=0;
	for(i=0;i<6;i++)
	{
		printf("Enter number%d:",i+1);
		scanf("%d",(x+i));
		sum+=*(x+i);
	}
	printf("Sum=%d",sum);
}
