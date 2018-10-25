#include<stdio.h>
union employee
{
	char name[50],post[50];
	float salary[50];
}employee[50];
int main()
{
	int i,n;
	printf("Enter number of employee:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("For employee%d:\n",i+1);
		printf("Enter name:");
		scanf("%s",&employee[i].name);
		printf("\nEnter post:");
		scanf("%s",&employee[i].post);
		printf("\nEnter salary:");
		scanf("%f",&employee[i].salary);	
	}
	for(i=0;i<n;i++)
	{
		printf("For employee%d:\n",i+1);
		printf("Name:   \t%s\n",employee[i].name);
		printf("Post:   \t%s\n",employee[i].post);
		printf("Salary: \t%.3f\n",employee[i].salary);
		printf("\n\n");
	}
}

