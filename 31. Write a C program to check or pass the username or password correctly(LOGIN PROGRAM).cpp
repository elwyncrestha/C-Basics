#include<stdio.h>
#include<conio.h>
int main()
{
	char username;
	int password;
	
	printf("Username:");
	scanf("%c",&username);
	printf("Password:");
	scanf("%d",&password);
	
	if(username=='a')
	{
		if(password==12345)
		{
			printf("Login successful !!!");
		}
		else
		{
			printf("Password is incorrect, try again!");
		}
	}
	else
	{
		printf("Enter valid username !!!");
	}
	getch();
}
