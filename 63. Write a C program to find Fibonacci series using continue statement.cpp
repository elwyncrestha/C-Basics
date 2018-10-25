#include<stdio.h>
int main()
{
	int i,n,num1=0,num2=1,nextterm=0;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i==1)
		{
			printf("%d,",num1);
			continue;
		}
		if(i==2)
		{
			printf("%d,",num2);
			continue;
		}
		nextterm=num1+num2;
		num1=num2;
		num2=nextterm;
		printf("%d,",nextterm);
	}
	return 0;
}
