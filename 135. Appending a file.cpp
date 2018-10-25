#include<stdio.h>
int main()
{
	int num;
	FILE *fp;
	
	fp=fopen("134text.txt","a");
	
	if(fp==NULL)
	{
		printf("Error!!!");
	}
	
	printf("Enter a number:");
	scanf("%d",&num);
	
	fprintf(fp,"%d",num);
	fclose(fp);
}
