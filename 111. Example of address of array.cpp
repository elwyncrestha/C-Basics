#include<stdio.h>
int main()
{
	int a[5];
	int i;
	for(i=0;i<5;i++)
	{
	printf("Address of a[%d]:%u\n",i,&a[i]);
	}
	
}
