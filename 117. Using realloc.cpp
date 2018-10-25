#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,*ptr,*ptr1;
	printf("Enter no. of terms:");
	scanf("%d",&n);
	
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("Error!!! Memory is not allocated.");
	}
	printf("\nAddress:\n");
	for(i=0;i<n;i++)
	{
		printf("%u ",ptr+i);
	}
	ptr1=(int*)realloc(ptr,sizeof(short int));
	printf("\nAddress:\n");
	for(i=0;i<n;i++)
	{
		printf("%u ",ptr1+i);
	}
}
