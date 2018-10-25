#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,rows;
	printf("Enter no. of rows:");
	scanf("%d",&rows);
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}
