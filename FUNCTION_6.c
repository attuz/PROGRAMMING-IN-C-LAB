#include<stdio.h>
void swap();
void main()
{
	swap();
}
void swap()
{
	int a,b,c;
	printf("Enter two numbers to swap:");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("After swapping:%d %d",a,b);
}
	
