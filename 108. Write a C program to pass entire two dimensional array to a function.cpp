#include<stdio.h>
void display(int age[2][2]);
int main()
{
	int agearray[2][2]={1,2,3,4};
	display(agearray);
	return 0;
}
void display(int age[2][2])
{
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		printf("%d ",age[i][j]);
	}
}
}
