#include<stdio.h>
int main()
{
	int i,j,k,x[2][2][3],a=1;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<3;k++,a++)
			{
				printf("Enter the values%d:",a);
				scanf("%d",&x[i][j][k]);
			}
		}
	}
	printf("\nDisplaying the values:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%d\t",x[i][j][k]);
			}
			printf("\n");
		}
	}
}
