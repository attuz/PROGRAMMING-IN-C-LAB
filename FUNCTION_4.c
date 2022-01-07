#include<stdio.h>
void add();
void main()
{
	add();
}
void add()
{
	int a,b,sum;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("Sum=%d",sum);
}
	
