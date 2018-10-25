#include<stdio.h>
int main()
{
	int x;
	printf("Enter a number to find its corresponding day:");
	scanf("%d",&x);
	
	switch(x)
	{
		case 1:
			printf("The day is Sunday");
			break;
		case 2:
			printf("The day is Monday");
			break;
		case 3:
			printf("The day is Tuesday");
			break;
		case 4:
			printf("The day is Wednesday");
			break;
		case 5:
			printf("The day is Thursday");
			break;
		case 6:
			printf("The day is Friday");
			break;
		case 7:
			printf("The day is Saturday");
			break;
		default:
			printf("The entered number is invalid\n");
			printf("Enter number from 1 to 7");
	}
	return 0;
}

