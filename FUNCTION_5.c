#include<stdio.h>
int add();
void main()
{
	printf("Sum=%d",add());
}
int add()
{
	int num1,num2,sum;
	printf("Enter two numbers:");
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	return(sum);
}

