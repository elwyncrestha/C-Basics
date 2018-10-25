#include <stdio.h>
int main()
{
	float a,b,c,d;
	printf("Enter the value of a,b and c:");
	scanf("%f%f%f",&a,&b,&c);
	d=(a>b)&&(a==b);//letting d
	printf("(a>b)&&(a==b)=%.f",d);
	return 0;
}
