#include<stdio.h>
int main()
{
	int i,j,i1,j1,matrix[2][2],p,q,r,s,p1,q1,r1,s1;
	char ch='a',ch1='a';
	printf("Here elements of matrices are represented as:\n");
	printf("a11=a	a12=b\n");
	printf("a21=c	a22=d\n\n");
	printf("Write two 2x2 matrices:\n");
	
	printf("\nFor matrix A:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter the value for %c:",ch);
			scanf("%d",&matrix[i][j]);
			ch++;
		}
	}
		p=matrix[0][0]; q=matrix[0][1];
		r=matrix[1][0]; s=matrix[1][1];
	
	printf("\nFor matrix B:\n");
	for(i1=0;i1<2;i1++)
	{
		for(j1=0;j1<2;j1++)
		{
			printf("Enter the value for %c:",ch1);
			scanf("%d",&matrix[i1][j1]);
			ch1++;
		}
	}
		p1=matrix[0][0]; q1=matrix[0][1];
		r1=matrix[1][0]; s1=matrix[1][1];
	
	printf("\nSum of matrices A and B is:\n");
	printf("%d	%d\n",p+p1,q+q1);
	printf("%d	%d",r+r1,s+s1);
	return 0;
}
