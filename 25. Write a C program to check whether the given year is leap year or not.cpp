#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the date(year):");
	scanf("%d",&x);
	
	y=x%4;
	if(y==0)
	{
		printf("The given year is leap year");
	}
	else
	{
		printf("The given year is not leap year");
	}
	return 0;
}
