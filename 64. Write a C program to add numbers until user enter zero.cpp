#include<stdio.h>
int main()
{
	double num,sum=0;
	
	do
	{
		printf("Enter a number:");
		scanf("%lf",&num);
		sum+=num;
	}
	while(num!=0);
	printf("Sum=%lf",sum);
	return 0;
}
