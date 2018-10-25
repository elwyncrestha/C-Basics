#include<stdio.h>
#include<string.h>
int main()
{
	char a[50]; int b;
	printf("Enter word or sentence:");
	gets(a);
	b=strlen(a);
	printf("The length of the string is:%d",b);
	return 0;
}
