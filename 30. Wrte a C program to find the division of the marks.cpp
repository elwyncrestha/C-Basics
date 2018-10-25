#include<stdio.h>
int main()
{
	int x;
	printf("Note here the values are in percentage");
	printf("\nEnter the marks obtained:");
	scanf("%d",&x);
	
	if(x>=75)
	{
		printf("Division=Distinction");
	}
	else if((x<75)&&(x>=60))
	{
		printf("Division=First division");
	}
	else if((x<60)&&(x>=50))
	{
		printf("Division=Second division");
	}
	else if((x<50)&&(x>=40))
	{
		printf("Division=Third division");
	}
	else
	{
		printf("You are failed");
	}
	return 0;
}
