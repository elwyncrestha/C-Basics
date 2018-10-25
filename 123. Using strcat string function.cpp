#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	printf("Enter words:");
	gets(a);
	printf("Enter another words:");
	gets(b);
	strcat(a,b);
	printf("After concatenation:");
	puts(a);
	return 0;
}
