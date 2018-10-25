#include<stdio.h>
int main()
{
	int num;
	FILE *fp;
	fp=fopen("134text.txt","w");
	
	if(fp==NULL)
	{
		printf("Error!!!");
	}
	printf("Enter a number:");
	scanf("%d",&num);
	
	fprintf(fp,"%d",num);
	fclose(fp);
}
