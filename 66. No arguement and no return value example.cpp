#include<stdio.h>
void area();
int main()
{
	area();
}
void area()
{
	float r,areaofcircle;
	printf("Enter radius:");
	scanf("%f",&r);
	areaofcircle=3.14*r*r;
	printf("Area of circle=%f",areaofcircle);
}
