#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,result;
	printf("Enter a number:\n");
	scanf("%d",&x);
	printf("Enter the exponent:");
	scanf("%d",&y);
	
	result=pow(x,y);
	printf("Answer=%d",result);
	return 0;
}
