#include<stdio.h>
int main()
{
	int x,count=0,digit;
	printf("Enter a number:");
	scanf("%d",&x);
	
	while(x>0)
	{
		digit=x%10;
		if(digit=(0||1||2||3||4||5||6||7||8||9))
		{
			count+=1;
		}
		x/=10;
	}
	printf("Digits=%d",count);
	return 0;
}
