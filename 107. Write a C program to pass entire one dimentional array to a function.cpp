#include<stdio.h>
void display(int age[]);
int main()
{
	int ageArray[]={1,2,3,4,5};
	display(ageArray);
	return 0;
}
void display(int age[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d ",age[i]);
	}
}
