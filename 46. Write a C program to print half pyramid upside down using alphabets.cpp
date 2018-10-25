#include<stdio.h>
int main()
{
	int i,j,n,ab,x=1;
	char ch='a';
	
	x=='a';
	
	printf("Enter no. of rows:");
	scanf("%d",&n);
	
	ab=n;
	
	for(i=1;i<=n;i++)
	{
		for(j=ab;j>=1;j--)
		{
			printf("%c ",ch);
		}
		ch++;
		ab--;
		printf("\n");
	}
	return 0;
}
