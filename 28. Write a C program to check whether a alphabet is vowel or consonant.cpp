#include<stdio.h>
int main()
{
	char c;
	char lowercase, uppercase;
	
	printf("Enter a alphabet:");
	scanf("%c",&c);
	
	lowercase=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
	uppercase=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
	
	if( (c>='a')&&(c<='z'))
	{
	
		if(lowercase||uppercase)
		{
			printf("The alphabet %c is vowel",c);
		}
		else
		{
			printf("The alphabet %c is consonant",c);
		}
	}
	else
	{
		printf("Invalid!\nEnter an alphabet");
	}
	return 0;
}
