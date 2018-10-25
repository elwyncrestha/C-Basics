#include<stdio.h>
int main()
{
	int num;
	FILE *fp;
	
	fp=fopen("134text.txt","r");
	
	if(fp==NULL)
	{
		printf("Error!!!");
	}
	
	fscanf(fp,"%d",&num);
	printf("Number=%d",num);
	fclose(fp);
	
	return 0;
}
