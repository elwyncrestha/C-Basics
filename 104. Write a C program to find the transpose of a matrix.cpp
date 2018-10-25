#include<stdio.h>
int main()
{
	int i,j,a,b,A[6][6],z=1;
	printf("Enter no. of rows and column:");
	scanf("%d%d",&a,&b);
	printf("\nEnter a matrix:\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++,z++)
		{
			printf("Enter element%d:",z);
			scanf("%d",&A[i][j]);
		}
	}
	printf("\nGiven matrix is:\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
	printf("\nThe transpose of matrix is:\n");
	for(j=0;j<b;j++)
	{
		for(i=0;i<a;i++)
		{
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
	return 0;
}
