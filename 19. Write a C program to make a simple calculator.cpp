#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	float num1,num2;
	
	printf("What do you want to do?\n");
	printf("Addition, Substraction, Multiplication, or Division:");
	ch=getche();//gets character and display the character in the screen
	printf("\nEnter first number:");
	scanf("%f",&num1);
	printf("\nEnter second number:");
	scanf("%f",&num2);
	printf("\n\n");
	
	if(ch=='A')
	{
		printf("%f+%f=%.2f",num1,num2,num1+num2);
	}
	
	if(ch=='S')
	{
		printf("%f-%f=%.2f",num1,num2,num1-num2);
	}
	
	if(ch=='M')
	{
		printf("%f*%f=%f.2",num1,num2,num1*num2);
	}
	
	if(ch=='D')
	{
		printf("%f/%f=%.2f",num1,num2,num1/num2);
	}
	
	getch();
}
