#include<stdio.h>
void main()
{
	int n,r,temp,sum=0;
	printf("Enter a number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	printf("\n Reverse of %d is %d", temp,sum);
}
