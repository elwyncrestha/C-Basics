#include<stdio.h>
int main()
{
	int i=1,n,sum,num1=0,num2=1;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("%d,",num1);
		sum=num1+num2;
		num1=num2;
		num2=sum;
		i++;
	}
	return 0;
}
