#include<stdio.h>
#include<conio.h>
int main()
{
	char i,j,c;
	printf("Enter no. of rows:");
	scanf("%c",&c);
	
	for(i='a';i<=c;i++)
	{
		for(j='a';j<=i;j++)
		{
			printf("%c ",i);
		}
		printf("\n");
	}
	getch();
}
