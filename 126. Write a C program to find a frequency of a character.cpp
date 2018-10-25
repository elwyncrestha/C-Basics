#include<stdio.h>
#include<string.h>
int main()
{
	char c,a[50];
	int i,frequency=0;
	printf("Enter a string:");
	gets(a);
	
	printf("Enter a character to find its frequency:");
	scanf("%c",&c);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(c==a[i])
		++frequency;
	}
	printf("Frequency of %c is:%d",c,frequency);
	return 0;
}
