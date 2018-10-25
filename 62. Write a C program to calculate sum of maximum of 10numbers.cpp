#include<stdio.h>
int main()
{
	int i,a,sum=0;
	
	for(i=1;i<=10;i++)
	{
		printf("Enter a number%d:",i);
		scanf("%d",&a);
		if(a<0)
		{
			continue;
		}
		printf("Sum=%d\n",sum+=a);
	}
	return 0;
}

