#include<stdio.h>
void display(int age);
int main()
{
	int ageArray[]={26,27,28,29};
	display(ageArray[2]);
	return 0;
}
void display(int age)
{
	printf("%d",age);
}
