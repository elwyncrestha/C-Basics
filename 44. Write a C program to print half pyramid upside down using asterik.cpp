#include<stdio.h>
int main()
{
	int i,j,n,a;
	
	printf("Enter the numbers of row:");
	scanf("%d",&n);
	a=n;
	for(i=1;i<=a;i++)
	{
		for(j=n;j>=1;j--)
		{
			printf("* ");
		}
		n--;
		printf("\n");
	}
	return 0;
}
