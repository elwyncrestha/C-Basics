#include<stdio.h>
int main()
{
	float a,b,c,d;
	printf("Enter any four numbers:");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	
	if((a>b)&&(a>c)&&(a>d))
	{
		printf("%.3f is the largest number",a);
	}
	else
	{
		if((b>c)&&(b>d))
		{
			printf("%.3f is the largest number",b);
		}
		else if((c>b)&&(c>d))
		{
			printf("%.3f is the largest number",c);
		}
		else
		{
			printf("%.3f is the largest number",d);
		}
	}
	return 0;
}
