#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,rows,a,b=1;
	printf("Enter no. of rows:");
	scanf("%d",&rows);
	
	a=rows;
	
	for(i=1;i<=rows;i++)
	{
		for(j=a;j>=1;j--)
		{
			printf("%d\t",b);
			b++;
		}
		a--;
		printf("\n");
	}
	getch();
}
	
	
