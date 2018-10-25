#include<stdio.h>
int main()
{
	float p,t,r,SimpleInterest;
	printf("Enter the value of principal:Rs.\n");
	scanf("%f",&p);
	printf("Enter the value of time:year\n");
	scanf("%f",&t);
	printf("Enter the value of rate of interest:%");
	scanf("%f",&r);
	
	SimpleInterest=(p*t*r)/100;
	printf("Simple Interest=%.3f",SimpleInterest);
	return 0;
}
