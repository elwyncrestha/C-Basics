#include<stdio.h>
int main()
{
	int *p;
	int a;
	a=5;
	printf("Address of a=%u\n",&a);
	printf("Value of a=%d\n",a);
	p=&a;
	printf("Address of p=%u\n",p);
	printf("Value of p=%d\n",*p);
	a=12;
	printf("Address of p=%u\n",p);
	printf("Value of p=%d\n",*p);
	*p=2;
	printf("Address of a=%u\n",&a);
	printf("Value of a=%d",a);
}
