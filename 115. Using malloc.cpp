#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, i, *ptr, sum=0;//initialization of sum is required to remove garbage value
	
	printf("Enter number of elements:");
	scanf("%d",&num);

	ptr=(int*)malloc(num*sizeof(int)); //memory allocated using malloc
	if(ptr==NULL)
	{
		printf("Error ! memory not allocated.");
		exit(0);
	}
	
	for(i=0;i<num;i++)
	{
		printf("Enter element%d:",i+1);
		scanf("%d",ptr+i);
		sum+=*(ptr+i);
	}
	printf("Sum=%d",sum);
	free(ptr);
	sum=0;
	
	printf("\nEnter number of elements:");
	scanf("%d",&num);
	ptr=(int*)malloc(num*sizeof(int));
	
	if(ptr==NULL)
	{
		printf("Error !");
		exit(0);
	}
	
	for(i=0;i<num;i++)
	{
		printf("Enter element%d:",i+1);
		scanf("%d",ptr+i);
		sum+=*(ptr+i);
	}
	printf("Sum=%d",sum);
	return 0;
}
