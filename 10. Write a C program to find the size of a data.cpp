#include <stdio.h>
int main()
{
	int a;
	float b;
	double c;
	char d;
	printf("The value of integer a is:%dbytes\n",sizeof(a));
	printf("The value of float b is:%dbytes\n", sizeof(b));
	printf("The value of double c is:%dbytes\n",sizeof(c));
	printf("The value of char d is:%dbytes", sizeof(d));
	return 0;
}
