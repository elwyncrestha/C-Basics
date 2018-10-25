#include<stdio.h>
int main()
{
	int num[20];
	int i,count=0;
	for(i=0;i<20;i++)
	{
		printf("Enter the age of person%d:",i+1);
		scanf("%d",&num[i]);
	}
	for(i=0;i<20;i++)
	{
		if((num[i]>20)&&(num[i]<25))
		{
			count+=1;
		}
	}
	printf("\nTotal no. of people from age between 20 to 25 is:%d",count);
	return 0;
}
