#include<stdio.h>
int main()
{
	float x,y,z,a;
	printf("Enter the value of angles of a triangle:");
	scanf("%f%f%f",&x,&y,&z);
	
	a=x+y+z;
	
	if(a==180)
	{
		printf("The given triangle is valid");
	}
	else
	{
		printf("The given triangle is not valid");
	}
	return 0;
}
