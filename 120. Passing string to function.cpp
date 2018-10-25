#include<stdio.h>
void string(char sentence[]);
int main()
{
	char sen[100];
	printf("Enter the sentence:");
	gets(sen);
	string(sen);
	return 0;
}
void string(char sentence[])
{
	printf("Your sentence is: ");
	puts(sentence);	
}
