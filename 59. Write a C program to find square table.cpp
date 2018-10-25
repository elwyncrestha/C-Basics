#include<stdio.h>
int main()
{
	int a=1,i,b;
	printf("Enter the last number of square table:");
	scanf("%d",&b);
	
	for(i=1;i<=b;i++)
	{
		printf("%d  =%d\n",a,a*a);
		a++;
	}
return 0;	
}
