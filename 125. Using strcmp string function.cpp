#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	printf("Enter first string:");
	gets(a);
	printf("\nEnter second string:");
	gets(b);
	if(strcmp(a,b)==0)
	{
		printf("Both are same.");
	}
	else
	{
		printf("They are not same");
	}
	return 0;
}
