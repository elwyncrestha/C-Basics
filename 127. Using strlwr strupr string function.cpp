#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];
	printf("Enter word in lowercase:");
	gets(a);
	strupr(a);
	printf("Word is uppercase:");
	puts(a);
	return 0;
}
