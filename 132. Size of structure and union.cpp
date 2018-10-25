#include<stdio.h>
struct a
{
	char a[50];
	int id;
}aa;
union b
{
	char a[50];
	int id;
}bb;
int main()
{
printf("Size of struct is:%d\n",sizeof(aa));
printf("Size of union is:%d",sizeof(bb));
return 0;
}
