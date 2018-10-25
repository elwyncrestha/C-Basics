#include<stdio.h>
#include<string.h>
int main()
{
	char vowel,sentence[1000];
	int i,count=0,count1=0,a;
	printf("Enter a word or sentence:");
	gets(sentence);
	a=strlen(sentence);
	
	for(i=0;sentence[i]!='\0';i++)
	{
		if(sentence[i]=='a'||sentence[i]=='e'||sentence[i]=='i'||sentence[i]=='o'||sentence[i]=='u'
		||sentence[i]=='A'||sentence[i]=='E'||sentence[i]=='I'||sentence[i]=='O'||sentence[i]=='U')
		
		{
			++count;
		}
		else if(sentence[i]==' ')
		{
			++count1;
		}
	}
	printf("Total no. of vowels:%d\n",count);
	printf("Total no. of consonants:%d\n",a-count-count1);
	printf("Total no. of white spaces:%d",count1);
	return 0;
}
