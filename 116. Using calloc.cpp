#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,num, *ptr,sum=0;
	printf("Enter number of elements:");
	scanf("%d",&num);
	
	ptr=(int*)calloc(num,sizeof(int));
	if(ptr==NULL)
	{
		printf("Error!!! memory not allocated.");
	}
	
	for(i=0;i<num;i++)
	{
		printf("Enter element%d:",i+1);
		scanf("%d",ptr+i);
		sum+=*(ptr+i);
	}
	printf("Sum=%d",sum);
	free(ptr);
	return 0;
}
