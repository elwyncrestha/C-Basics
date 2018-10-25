#include<stdio.h>
struct employee
{
	float salary[100];
	char name[50], post[50];
}emp[100];

int main()
{
	int i,n;
	FILE *fp;
	fp=fopen("137Employeesheet.txt","w");
	//if(fp==NULL)
	//{
	//	printf("Error!!!");
	//}
	
	printf("Enter number of people:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("For employee%d:\n",i+1);
		fprintf(fp,"For employee%d:\n",i+1);
		printf("Enter name:");
		scanf("%s",&emp[i].name);
		fprintf(fp,"Name:  \t%s\n",emp[i].name);
		
		
		printf("Enter post:");
		scanf("%s",&emp[i].post);
		fprintf(fp,"Post:  \t%s\n",emp[i].post);
		
		printf("Enter salary:");
		scanf("%f",&emp[i].salary);
		fprintf(fp,"Salary:\t%f\n\n",emp[i].salary);
		
		printf("\n");
	}
	fclose(fp);
	return 0;
}
