#include<stdio.h>
int main()
{
	float a,b,sum,average;
	printf("Enter any two numbers:");
	scanf("%f%f",&a,&b);
	
	sum=a+b;
	average=(a+b)/2;
	
	printf("Sum=%.3f\n",sum);
	printf("Average=%.3f",average);
	
	return 0;
}
