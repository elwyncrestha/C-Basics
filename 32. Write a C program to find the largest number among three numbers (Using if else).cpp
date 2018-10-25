#include<stdio.h>
int main()
{
	float x,y,z;
	printf("Enter any three numbers:");
	scanf("%f%f%f",&x,&y,&z);
	
	if((x>y)&&(x>z))
	{
		printf("%f is the largest number",x);
	}
	else if(y>z)
	{
		printf("%f is the largest number",y);
	}
	else
	{
		printf("%f is the largest number",z);
	}
	return 0;
}
