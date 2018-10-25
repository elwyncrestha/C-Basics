#include<stdio.h>
void alpha(char ch);
int main()
{
	char x;
	printf("Enter a character:");
	scanf("%c",&x);
	alpha(x);
	return 0;
}
void alpha(char ch)
{
	if(((ch>='A')&&(ch<='Z'))||((ch>='a')&&(ch<='z')))
	{
		printf("%c is alphabet",ch);
	}
	else
	{
		printf("%f is not alphabet",ch);
	}
}
