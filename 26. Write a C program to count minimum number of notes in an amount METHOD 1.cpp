#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
	printf("Enter an amount that you have:");
	scanf("%d",&a);
	
	b=a/1000;//quotient gives no. of 1000 notes
	c=a%1000;//for remaining notes excluding 1000
	
	d=c/500;//quotient gives no. of 500 notes
	e=c%500;//for remaining notes excluding 1000,500
	
	f=e/100;//quotient gives no. of 100 notes
	g=e%100;//for remaining notes excluding 1000,500,100
	
	h=g/50;//quotient gives no. of 50 notes
	i=g%50;//for remaining notes excluding 1000,500,100,50
	
	j=i/20;//quotient gives no. of 20 notes
	k=i%20;//for remaining notes excluding 1000,500,100,50,20
	
	l=k/10;//quotient gives no. of 10 notes
	m=k%10;//for remaining notes excluding 1000,500,100,50,20,10
	
	n=m/5;//quotient gives no. of 5 notes
	o=m%5;//for remaining notes excluding 1000,500,100,50,20,10,5
	
	p=o/1;//quotient gives no. of Re.1 coins
	
	
	printf("No. of 1000rupee notes:%d\n",b);
	printf("No. of 500rupee notes:%d\n",d);
	printf("No. of 100rupee notes:%d\n",f);
	printf("No. of 50rupee notes:%d\n",h);
	printf("No. of 20rupee notes:%d\n",j);
	printf("No. of 10rupee notes:%d\n",l);
	printf("No. of 5rupee notes:%d\n",n);
	printf("No. of 1rupee coins:%d",p);
	
	return 0;
}
