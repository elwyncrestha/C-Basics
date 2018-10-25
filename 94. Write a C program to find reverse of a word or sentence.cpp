#include<stdio.h>
void reverse();
int main()
{
	printf("Emter a sentence:");
	reverse();
}
void reverse()
{
	char c;
	scanf("%c",&c);
	if(c!='\n')
	{
		reverse();
		printf("%c",c);
	}
}
