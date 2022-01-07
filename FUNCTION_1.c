#include<stdio.h>
void add(int,int);
void main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	add(a,b);
}
void add(int x, int y)
{
	int sum;
	sum=x+y;
	printf("Sum=%d",sum);
}
