#include<stdio.h>
int main()
{
	char f[50],m[50],l[50];
	printf("Enter your:");
	printf("\nFirst name(uppercase):");
	scanf("%s",f);
	printf("\nSecond name(uppercase):");
	scanf("%s",m);
	printf("\nLast name(uppercase):");
	scanf("%s",l);
	
	printf("\n\nYour name is: %c.%c.%s",f[0],m[0],l);
	return 0;
}
