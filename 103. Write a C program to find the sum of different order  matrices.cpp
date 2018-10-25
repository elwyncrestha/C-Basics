#include<stdio.h>
int main()
{
	int i,j,a,b,A[6][6],B[6][6],C[6][6],z=1,z1=1;
	printf("Enter the numbers of rows and columns:");
	scanf("%d%d",&a,&b);
	
	printf("\nFor matrix A:\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++,z++)
		{
			printf("Enter element%d:",z);
			scanf("%d",&A[i][j]);
		}
	}
	printf("\nFor matrix B:\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++,z1++)
		{
			printf("Enter element%d:",z1);
			scanf("%d",&B[i][j]);
		}
	}
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
		}
	}
	printf("\nSum of two matrices is:\n");
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d	",C[i][j]);
		}
		printf("\n");
	}
	return 0;
}
