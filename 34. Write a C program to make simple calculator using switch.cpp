#include<stdio.h>
#include<conio.h>
int main()
{
	char op;
	float x,y;
	
	printf("What operation do you want to perform?\n");
	printf("+ - * /:");
	scanf("%c",&op);
	printf("Enter two numbers:");
	scanf("%f%f",&x,&y);
	
	switch(op)
	{
		case '+':
			printf("%f+%f=%.2f,x,y,x+y");
			break;
		case '-':
			printf("%f-%f=%.2f,x,y,x-y");
			break;
		case '*':
			printf("%f*%f=%.2f",x,y,x*y);
			break;
		case '/':
			printf("%f/%f=%.2f",x,y,x/y);
			break;
		default:
			printf("Use only arithematic operators");
	}
	getch();
}
