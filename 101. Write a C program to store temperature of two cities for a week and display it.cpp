#include<stdio.h>
int main()
{
	int i,j,x[2][7];
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<7;j++)
		{
			printf("City%d,Day%d:",i+1,j+1);
			scanf("%d",&x[i][j]);
		}
	}
	printf("\nDisplaying the values:\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<7;j++)
		{
			printf("City%d,Day%d:%d\n",i+1,j+1,x[i][j]);
		}
	}
	return 0;
}
