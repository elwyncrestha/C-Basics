#include<stdio.h>
struct employee
{
	char name[50],post[50],address[50];
	int id;
	float salary;
}employee[100];

int main()
{
	int i,n;
	printf("Enter total number of employee:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("For employee%d:",i+1);
		printf("\nEnter employee ID:");
		scanf("%d",&employee[i].id);
		printf("\nEnter employee name:");
		scanf("%s",&employee[i].name);
		printf("\nEnter employee post:");
		scanf("%s",&employee[i].post);
		printf("\nEnter employee salary:");
		scanf("%f",&employee[i].salary);
		printf("\nEnter employee address:");
		scanf("%s",&employee[i].address);
		printf("\n"); 
	}
	printf("Displaying the value:\n\n");
	for(i=0;i<n;i++)
	{
		printf("For employee%d:\n",i+1);
		printf("Id:     \t%d\n",employee[i].id);
		printf("Name:   \t%s\n",employee[i].name);
		printf("Post:   \t%s\n",employee[i].post);
		printf("Salary: \t%.3f\n",employee[i].salary);
		printf("Address:\t%s",employee[i].address);
		printf("\n\n");
	}
	return 0;
}
