#include<stdio.h>
int main()
{
	float r,area,perimeter;
	const float PI=3.14;
	printf("Enter the value of radius of circle:");
	scanf("%f",&r);
	
	area=PI*r*r;
	perimeter=2*PI*r;
	
	printf("Area of circle=%.3f square meter \n",area);
	printf("Perimeter of circle=%.3f meter",perimeter);
	
	return 0;
}
