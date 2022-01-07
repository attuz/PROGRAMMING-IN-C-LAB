#include<stdio.h>
int add(int,int);
void main()
{
	int a,b,S;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	S=add(a,b);
	printf("Sum=%d",S);
}
int add(int x, int y)
{
	int sum;
	sum=x+y;
	return(sum);
}
