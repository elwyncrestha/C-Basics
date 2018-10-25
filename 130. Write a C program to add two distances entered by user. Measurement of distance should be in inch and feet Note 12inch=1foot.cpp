#include<stdio.h>
struct Distance
{
	int feet;
	float inch;
}dis1, dis2, sum;

int main()
{
	int i;
	printf("1st distance:\n");
	printf("Enter feet:");
	scanf("%d",&dis1.feet);
	printf("\nEnter inch:");
	scanf("%f",&dis1.inch);
	
	printf("2nd distance:\n");
	printf("Enter feet:");
	scanf("%d",&dis2.feet);
	printf("Enter inch:");
	scanf("%f",&dis2.inch);
	
	sum.feet=(dis1.feet)+(dis2.feet);
	sum.inch=(dis1.feet)+(dis2.feet);
	
	for(i=1;sum.inch>=12;i++)
	{
		if(sum.inch > 12)
	{
		++sum.feet;
		sum.inch-=12;
	}
	}

	printf("Total distance:%d\' %.1f\"",sum.feet,sum.inch);

}
