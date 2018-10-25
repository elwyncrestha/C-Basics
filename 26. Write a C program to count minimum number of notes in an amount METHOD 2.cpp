#include<stdio.h>
int main()
{
	int amount,note1000,note500,note100,note50,note10,note5,note1;
	note1000=note500=note100=note50=note10=note5=note1=0;
	
	printf("Enter an amount that you have:");
	scanf("%d",&amount);
	
	if(amount>=1000)
	{
		note1000=amount/1000;
		amount-=note1000*1000;
	}
	
	if(amount>=500)
	{
		note500=amount/500;
		amount-=note500*500;
	}
	
	if(amount>=100)
	{
		note100=amount/100;
		amount-=note100*100;
	}
	
	if(amount>=50)
	{
		note50=amount/50;
		amount-=note50*50;
	}
	
	if(amount>=10)
	{
		note10=amount/10;
		amount-=note10*10;
	}
	
	if(amount>=5)
	{
		note5=amount/5;
		amount-=note5*5;
	}
	
	if(amount>=1)
	{
		note1=amount/1;
	}
	printf("Note1000=%d\n",note1000);
	printf("Note500=%d\n",note500);
	printf("Note100=%d\n",note100);
	printf("Note50=%d\n",note50);
	printf("Note10=%d\n",note10);
	printf("Note5=%d\n",note5);
	printf("Note1=%d",note1);
	
	return 0;
}
