#include<stdio.h>
void main()
{
	int n,i,fact=1;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		fact=fact*i;
	}
	printf("Factorial of a %d is %d",n,fact);
}	
	
