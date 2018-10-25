#include<stdio.h>
int main()
{
	char name[50],post[50];
	float salary;
	FILE *fp;
	fp=fopen("138Employeesheet.txt","w");
	
	if(fp==NULL)
	{
		printf("Error!!!");
	}
	
	printf("Enter name of employee:");
	scanf("%s",&name);
	fprintf(fp,"Name:  \t%s\n",name);
	printf("Enter post of employee:");
	scanf("%s",&post);
	fprintf(fp,"Post:  \t%s\n",post);
	printf("Enter salary of employee:");
	scanf("%f",&salary);
	fprintf(fp,"Salary:\t%.2f",salary);
	
	fclose(fp);
	return 0;
}
