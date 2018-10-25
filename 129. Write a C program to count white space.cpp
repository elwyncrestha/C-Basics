/* TODO (#1#): this program is incorrect */

#include<stdio.h>
int main()
{
	char sentence[1000];
	int i,count=0;
	printf("Enter a sentence:");
	gets(sentence);
	
	for(i=0;sentence[i]!='\0';i++)
	{
		if(sentence[i]\b==sentence[i+1])
		{
			count++;
		}
	}
	printf("No. of white spaces:%d",count);
	return 0;
}
