#include<stdio.h>
int main()
{
	int x;
	printf("Enter the value of x for finding its corresponding days:");
	scanf("%d",&x);
	
	if(x==1)
	{
		printf("The day is Sunday");
	}
	else if(x==2)
	{
		printf("The day is Monday");
	}
	else if(x==3)
	{
		printf("The day is Tuesday");
	}
	else if(x==4)
	{
		printf("The day is Wednesday");
	}
	else if(x==5)
	{
		printf("The day is Thursday");
	}
	else if(x==6)
	{
		printf("The day is Friday");
	}
	else if(x==7)
	{
		printf("The day is Saturday");
	}
	else
	{
		printf("Enter the values from 1 to 7 only");
	}
	return 0;
}
