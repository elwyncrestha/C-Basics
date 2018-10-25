#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,rows,a=1,b;
	printf("Enter no. of rows:");
	scanf("%d",&rows);
	
	b=rows;
	
	for(i=1;i<=rows;i++)
	{
		for(j=b;j>=1;j--)
		{
			printf("%d\t",a);
			a++;
		}
		b--;
		printf("\n");
	}
	getch();
}
